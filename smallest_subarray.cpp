#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int a[n];
    for(int i =0;i<n;i++)
    cin >> a[i];
    int x;
    cin >> x;
    int count1,count2=1,count3=n+1;
    int min_len = n + 1; 
  
     // Pick every element as starting point 
     for (int start=0; start<n; start++) 
     { 
          // Initialize sum starting with current start 
          int curr_sum = a[start]; 
  
          // If first element itself is greater 
          if (curr_sum > x) return 1; 
  
          // Try different ending points for curremt start 
          for (int end=start+1; end<n; end++) 
          { 
              // add last element to current sum 
              curr_sum += a[end]; 
  
              // If sum becomes more than x and length of 
              // this subarray is smaller than current smallest 
              // length, update the smallest length (or result) 
              if (curr_sum > x && (end - start + 1) < min_len) 
                 min_len = (end - start + 1); 
          } 
     } 
     cout << min_len; 
} 
        