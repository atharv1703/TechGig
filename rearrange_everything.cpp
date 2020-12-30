#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int a[n];
    int b[n];
    for(int i=0;i<n;i++)
    {
        cin >> a[i];
    }
    int count,temp;
    for(int i =0;i<n;i++)
    {
        temp=a[i];
        for(int j=0;j<n;j++)
        {
            if(j==temp)
            b[temp]=i;
        }
    }  
    for(int i=0;i<n;i++)
    {
        cout << b[i];
    }
}