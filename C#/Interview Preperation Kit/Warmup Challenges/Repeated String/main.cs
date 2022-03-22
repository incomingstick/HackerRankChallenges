using System.IO;
using System;

class Result
{

    /*
     * Complete the 'repeatedString' function below.
     *
     * The function is expected to return a LONG_INTEGER.
     * The function accepts following parameters:
     *  1. STRING s
     *  2. LONG_INTEGER n
     */

    public static long repeatedString(string s, long n)
    {
        // Lets first get the number of times 'a' appears in the string
        int aCount = s.Length - s.Replace("a", "").Length;

        // Start our return value by getting the number of times our full string will
        // appear, and multiplying that by our count of 'a'
        long retVal = (aCount * (n / s.Length));

        // Find out how many characters of the string are remaining
        long mod = (n % s.Length);

        // Get the substring of our string for the remainder
        string sub = s.Substring(0, (int)mod);

        // Add any remaining counts of 'a'
        retVal += sub.Length - sub.Replace("a", "").Length;

        //Console.WriteLine("aCount: {0}, retVal: {1}, mod: {2}", aCount, retVal, mod);

        return retVal;
    }

}

class Solution
{
    public static void Main(string[] args)
    {
        TextWriter textWriter = new StreamWriter(@System.Environment.GetEnvironmentVariable("OUTPUT_PATH"), true);

        string s = Console.ReadLine();

        long n = Convert.ToInt64(Console.ReadLine().Trim());

        long result = Result.repeatedString(s, n);

        textWriter.WriteLine(result);

        textWriter.Flush();
        textWriter.Close();
    }
}
