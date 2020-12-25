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
  
    
     for (int start=0; start<n; start++) 
     { 
          
          int curr_sum = a[start]; 
  
           
          if (curr_sum > x) return 1; 
  
          
          for (int end=start+1; end<n; end++) 
          { 
              
              curr_sum += a[end]; 
  
              
              if (curr_sum > x && (end - start + 1) < min_len) 
                 min_len = (end - start + 1); 
          } 
     } 
     cout << min_len; 
} 
        