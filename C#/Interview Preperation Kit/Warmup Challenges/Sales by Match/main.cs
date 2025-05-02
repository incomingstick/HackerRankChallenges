using System.Collections.Generic;
using System.IO;
using System.Linq;
using System;

class Result
{

    /*
     * Complete the 'sockMerchant' function below.
     *
     * The function is expected to return an INTEGER.
     * The function accepts following parameters:
     *  1. INTEGER n
     *  2. INTEGER_ARRAY ar
     */

    public static int SockMerchant(int n, List<int> ar)
    {
        // Lets get it sorted to make popping and collecting easier
        ar.Sort();

        // Print it so we can visualize
        //Console.WriteLine("[{0}]", string.Join(", ", ar));

        int curr = ar[0];   // The current number being evaluated
        int count = 0;      // The number of times we have seen the curr
        int pairs = 0;      // The number of total pairs across the set
        int it = 0;         // The iteration total

        foreach (int val in ar)
        {
            // We can skip the first value, as that is the first curr
            if (it++ == 0)
            {
                continue;
            }
            // Check if the val is our curr, if it is, check if we are on a set pair
            else if (curr == val)
            {
                if (count++ % 2 == 0)
                {
                    pairs++;
                }
            }
            // We have found a new curr val, reset the curr count
            else
            {
                curr = val;
                count = 0;
            }
        }

        return pairs;
    }

}

class Solution
{
    public static void Main(string[] args)
    {
        TextWriter textWriter = new StreamWriter(@System.Environment.GetEnvironmentVariable("OUTPUT_PATH"), true);

        int n = Convert.ToInt32(Console.ReadLine().Trim());

        List<int> ar = Console.ReadLine().TrimEnd().Split(' ').ToList().Select(arTemp => Convert.ToInt32(arTemp)).ToList();

        int result = Result.SockMerchant(n, ar);

        textWriter.WriteLine(result);

        textWriter.Flush();
        textWriter.Close();
    }
}
