using System.Collections.Generic;
using System.IO;
using System.Linq;
using System;

class Result
{

    /*
     * Complete the 'jumpingOnClouds' function below.
     *
     * The function is expected to return an INTEGER.
     * The function accepts INTEGER_ARRAY c as parameter.
     */

    public static int JumpingOnClouds(List<int> c)
    {
        // Print it so we can visualize
        //Console.WriteLine("[{0}]", string.Join(", ", c));

        int it = 0;     // Current itrative value
        int hops = 0;   // Number of hops preformed

        return Traverse(c, it, hops);
    }

    private static int Traverse(List<int> c, int it, int hops)
    {
        // We cannot traverse any further, return our hop count
        if (it == c.Count - 1) return hops;

        // There is only one hop left
        if (it == c.Count - 2)
        {
            // Make the hop and return
            if (c[it + 1] == 0) return ++hops;
            else throw new Exception("Impossible game detected!");
        }

        // We mut have at least 3 values left in the array
        int oneSpace = 0;   // The smallest number of hops if you go one space
        int twoSpace = 0;   // The smallest number of hops if you go two spaces

        // Check if one space away is safe (one space)
        if (c[it + 1] == 0)
        {
            oneSpace = Traverse(c, it + 1, hops + 1);
        }
        // We cannot go this way
        else
        {
            oneSpace = -1;
        }

        // Check if two spaces away is safe, and continue traversing if it is. (two spaces)
        if (c[it + 2] == 0)
        {
            twoSpace = Traverse(c, it + 2, hops + 1);
        }
        // We cannot go this way
        else
        {
            twoSpace = -1;
        }

        // Track our traversal
        // Console.WriteLine("it: {0}, oneSpace: {1}, twoSpace: {2}, hops: {3}", it, oneSpace, twoSpace, hops);

        // Cannot go two spaces, so we HAVE to go one space
        if (oneSpace == -1) return twoSpace;

        // Cannot go one space, so we HAVE to go two spaces
        if (twoSpace == -1) return oneSpace;

        // Return whichever hop count is smaller
        return oneSpace < twoSpace ? oneSpace : twoSpace;
    }
}

class Solution
{
    public static void Main(string[] args)
    {
        TextWriter textWriter = new StreamWriter(@System.Environment.GetEnvironmentVariable("OUTPUT_PATH"), true);

        int n = Convert.ToInt32(Console.ReadLine().Trim());

        List<int> c = Console.ReadLine().TrimEnd().Split(' ').ToList().Select(cTemp => Convert.ToInt32(cTemp)).ToList();

        int result = Result.JumpingOnClouds(c);

        textWriter.WriteLine(result);

        textWriter.Flush();
        textWriter.Close();
    }
}
