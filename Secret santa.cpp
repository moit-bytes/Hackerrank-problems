#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int n,i,j,low;
    cin>>n;
    int a[n],b[n];
    for(i=0;i<n;i++)
    {
        cin>>a[i];
    }
    low=a[0];
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;i++)
        {
            if(low>a[j])
                low=a[j];
            }
        b[i]=low;
    }
    cout<<b[n-1]<<" ";
    for(i=0;i<(n-1);i++)
    {
        cout<<b[i]<<" ";
    }
    return 0;
}

