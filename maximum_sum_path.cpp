#include <iostream>
using namespace std;
 

int max(int x, int y) { return (x > y) ? x : y; }
 

int maxPathSum(int ar1[], int ar2[], int m, int n)
{
    
    int i = 0, j = 0;
 
   
    int result = 0, sum1 = 0, sum2 = 0;
 
    
    while (i < m && j < n) 
    {
        
        if (ar1[i] < ar2[j])
            sum1 += ar1[i++];
 
        
        else if (ar1[i] > ar2[j])
            sum2 += ar2[j++];
 
        else 
        {
            
            result += max(sum1, sum2);
 
            
            sum1 = 0, sum2 = 0;
 
            
            int temp = i;
            while (i < m && ar1[i] == ar2[j])
                sum1 += ar1[i++];
 
            while (j < n && ar1[temp] == ar2[j])
                sum2 += ar2[j++];
 
            result += max(sum1, sum2);
 
            sum1 = 0, sum2 = 0;
        }
    }
 
    
    while (i < m)
        sum1 += ar1[i++];
 
    
    while (j < n)
        sum2 += ar2[j++];
 
    
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
   
   
    cout << maxPathSum(ar1, ar2, m, n);
    return 0;
}