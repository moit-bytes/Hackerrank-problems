#include<iostream>
using namespace std;
int main()
{
    long long int n,q,i,x,y,i1,q1,s=0;
    cin>>n>>q;
    long long int a[n];
    for(i1=0;i1<n;i1++)
    {
        cin>>a[i1];
    }
    for(i1=0;i1<q;i1++)
    {
        cin>>q1;
        if(q1==1)
        {
            cin>>i>>x;
            i=i-1;
            if(i<n)
            a[i]+=x;
        }
        else if(q1==2)
        {
            cin>>y;
            s=0;
            for(i=1;i<n;i++)
            {
                s+=(a[i]*(y%(i+1)));
            }
            cout<<s<<endl;
        }
    }
    return 0;
}
