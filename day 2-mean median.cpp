// C# program to find mean
// and median of an array
using System;

class GFG
{
 // Function for
 // calculating mean
 public static double findMean(int[] a, int n)
 {
  int sum = 0;
  for (int i = 0; i < n; i++)
   sum += a[i];

  return (double)sum / (double)n;
 }

 // Function for
 // calculating median
 public static double findMedian(int[] a, int n)
 {
  // First we sort
  // the array
  Array.Sort(a);

  // check for
  // even case
  if (n % 2 != 0)
   return (double)a[n / 2];

  return (double)(a[(n - 1) / 2] + a[n / 2]) / 2.0;
 }

 // Driver Code
 public static void Main()
 {
  int[] a = { 1, 3, 4, 2, 7, 5, 8, 6 };
  int n = a.Length;
 
  // Function call
  Console.Write("Mean = " + findMean(a, n) + "\n");
  Console.Write("Median = " + findMedian(a, n)
     + "\n");
 }
}

// This code is contributed by Smitha .
