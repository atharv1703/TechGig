#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int a[n];
    for(int i =0;i<n;i++)
    cin >> a[i];
    int count=1,result=1;
    for(int i=1;i<n;i++)
    {
        if(a[i]>a[i-1])
        {
            count++;
        }
        else 
        {
            if(result<count)
            result=count;
            count =1;
        }
        
    }
     if(result<count)
            result=count;
    cout << result;
}