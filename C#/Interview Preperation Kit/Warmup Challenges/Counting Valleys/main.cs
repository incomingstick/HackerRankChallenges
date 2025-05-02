using System.IO;
using System;

class Result
{

    /*
     * Complete the 'countingValleys' function below.
     *
     * The function is expected to return an INTEGER.
     * The function accepts following parameters:
     *  1. INTEGER steps
     *  2. STRING path
     */

    public static int CountingValleys(int steps, string path)
    {
        // Print it so we can visualize
        //Console.WriteLine("[{0}]", path);

        int valleys = 0;            // The number of valleys we have traversed
        bool isCurrValley = false;  // Tracks if we are currently in a valley to track when we enter and leave
        int level = 0;              // Tracks the current level above "sea level"

        foreach (char c in path)
        {
            // When 'U' or 'u', we go up a level
            if (c == 'U' || c == 'u')
            {
                level++;
            }
            // When 'D' or 'd', we go down a level
            else if (c == 'D' || c == 'd')
            {
                level--;
            }

            // If we are at or above sea level, we are no longer in a valley
            if (level >= 0)
            {
                isCurrValley = false;
            }
            // When level is below 0, we are in a valley, and if we were not already in a valley, we have entered a new one!
            else if (level < 0 && !isCurrValley)
            {
                valleys++;
                isCurrValley = true;
            }
        }

        return valleys;
    }

}

class Solution
{
    public static void Main(string[] args)
    {
        TextWriter textWriter = new StreamWriter(@System.Environment.GetEnvironmentVariable("OUTPUT_PATH"), true);

        int steps = Convert.ToInt32(Console.ReadLine().Trim());

        string path = Console.ReadLine();

        int result = Result.CountingValleys(steps, path);

        textWriter.WriteLine(result);

        textWriter.Flush();
        textWriter.Close();
    }
}
