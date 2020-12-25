#include <iostream>
using namespace std;
 
// Utility function to find maximum of two integers
int max(int x, int y) { return (x > y) ? x : y; }
 
// This function returns the sum of elements on maximum path
// from beginning to end
int maxPathSum(int ar1[], int ar2[], int m, int n)
{
    // initialize indexes for ar1[] and ar2[]
    int i = 0, j = 0;
 
    // Initialize result and current sum through ar1[] and
    // ar2[].
    int result = 0, sum1 = 0, sum2 = 0;
 
    // Below 3 loops are similar to merge in merge sort
    while (i < m && j < n) 
    {
        // Add elements of ar1[] to sum1
        if (ar1[i] < ar2[j])
            sum1 += ar1[i++];
 
        // Add elements of ar2[] to sum2
        else if (ar1[i] > ar2[j])
            sum2 += ar2[j++];
 
        else // we reached a common point
        {
            // Take the maximum of two sums and add to
            // result
            result += max(sum1, sum2);
 
            // Update sum1 and sum2 for elements after this
            // intersection point
            sum1 = 0, sum2 = 0;
 
            // Keep updating result while there are more
            // common elements
            int temp = i;
            while (i < m && ar1[i] == ar2[j])
                sum1 += ar1[i++];
 
            while (j < n && ar1[temp] == ar2[j])
                sum2 += ar2[j++];
 
            result += max(sum1, sum2);
 
            sum1 = 0, sum2 = 0;
        }
    }
 
    // Add remaining elements of ar1[]
    while (i < m)
        sum1 += ar1[i++];
 
    // Add remaining elements of ar2[]
    while (j < n)
        sum2 += ar2[j++];
 
    // Add maximum of two sums of remaining elements
    result += max(sum1, sum2);
 
    return result;
}
int main()
{
    int p,q;
    cin >>p;
    int ar1[p];
    for(int i=0;i<p;i++)
    cin >> ar1[i];
    cin >>q;
    int ar2[q];
    for(int i=0;i<q;i++)
    cin >> ar2[i];
    
    int m = sizeof(ar1) / sizeof(ar1[0]);
    int n = sizeof(ar2) / sizeof(ar2[0]);
   
    // Function call
    cout << maxPathSum(ar1, ar2, m, n);
    return 0;
}