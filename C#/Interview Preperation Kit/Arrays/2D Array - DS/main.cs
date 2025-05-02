using System.Collections.Generic;
using System.IO;
using System.Linq;
using System;

class Result
{

    /*
     * Complete the 'hourglassSum' function below.
     *
     * The function is expected to return an INTEGER.
     * The function accepts 2D_INTEGER_ARRAY arr as parameter.
     */

    public static int HourglassSum(List<List<int>> arr)
    {
        // The value to be returned
        int ret = -64;

        // We will only need to iterate through the first 
        for (int i = 0; i < arr.Count - 2; i++)
        {
            for (int j = 0; j < arr.Count - 2; j++)
            {
                int a = arr[j][i];
                int b = arr[j][i + 1];
                int c = arr[j][i + 2];
                int d = arr[j + 1][i + 1];
                int e = arr[j + 2][i];
                int f = arr[j + 2][i + 1];
                int g = arr[j + 2][i + 2];

                int sum = a + b + c + d + e + f + g;

                // Console.WriteLine(sum);

                // If sum is greater than ret, make it the new ret value
                if (sum > ret) ret = sum;
            }
        }

        return ret;
    }

}

class Solution
{
    public static void Main(string[] args)
    {
        TextWriter textWriter = new StreamWriter(@System.Environment.GetEnvironmentVariable("OUTPUT_PATH"), true);

        List<List<int>> arr = new List<List<int>>();

        for (int i = 0; i < 6; i++)
        {
            arr.Add(Console.ReadLine().TrimEnd().Split(' ').ToList().Select(arrTemp => Convert.ToInt32(arrTemp)).ToList());
        }

        int result = Result.HourglassSum(arr);

        textWriter.WriteLine(result);

        textWriter.Flush();
        textWriter.Close();
    }
}
