#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n,k;
    cin >> n;
    int a[n];
    for(int i=0;i<n;i++)
    {
        cin >> a[i];
    }
    cin >> k;
    int count,result=0;
    for(int i=0;i<k;i++)
    {
        count = a[i];
        for(int j=0;j<k;j++)
        {
            if(a[j]==count && j==i)
            continue;
            else if(a[j]==count && j!=i)
            result++;
            else
            {
                continue;
            }
            
        }
    }
    if(result>=1)
    cout << "Yes";
    else 
    cout << "No";
}