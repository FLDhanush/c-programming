#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
// Function to find and return the
// the count of the composite numbers
int compcount(int ar[], int num, int* sum){
   // storing the largest element of the array
   int max_val = *max_element(ar, ar + num);
   // Using sieve to find all prime numbers
   // less than or equal to max_val
   // Create a boolean array "prime[0..n]". A
   // value in prime[i] will finally be false
   vector<bool> pr(max_val + 1, true);
   // setting the values of 0 and 1 as
   // true for prime.
   pr[0] = true;
   pr[1] = true;
   for (int p = 2; p * p <= max_val; p++){
      // If prime[p] is not changed, then
      // it is a prime
      if (pr[p] == true){
         // Update all multiples of p
         for (int i = p * 2; i <= max_val; i += p){
            pr[i] = false;
         }
      }
   }
   // Count all composite
   // numbers in the arr[]
   int ans = 0;
   for (int i = 0; i < num; i++){
      if (!pr[ar[i]]){
         ans++;
         *sum = *sum + ar[i];
      }
   }
   return ans;
}
// Driver code
int main(){
   int ar[] = { 1, 2, 3, 4, 5 };
   int num = sizeof(ar) / sizeof(ar[0]);
   int sum = 0;
   cout << "Count of Composite Numbers = "<< compcount(ar, num, &sum);
   cout << "\nSum of Composite Numbers = " << sum;
   return 0;
}