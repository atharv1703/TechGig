#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n,max,temp;
    cin >> n;
    int a[n];
    for(int i = 0; i<n ; i++)
    cin >> a[i];
    for(int i =0;i<n;i++)
    {
        max = i;
        for(int j = i+1;j<n;j++)
        {
            if(a[j]>a[max])
            max=j;
        }
        if(max!=i)
        {
            temp=a[i];
            a[i]=a[max];
            a[max]=temp;
        }
    }
     for (int i = 0; i < n; i++)
        cout << a[i];
    cout << a[2];
    return 0;
}