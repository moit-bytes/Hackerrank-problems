#include<iostream>
using namespace std;
void binary(int a)
{
	cout<<a<<" --> ";
	int b[5]={0,0,0,0,0};
	int i=0;
	while(a>0)
	{
		b[i]=a%2;
		a=a/2;
		i++;
	}
	for(int j=4;j>=0;j--)
	cout<<b[j]<<" ";
	cout<<endl;
}
int main()
{
	int n,a;
	cout<<"Enter the value of n: ";
	cin>>n;
	for(a=0;a<=n;a++)
	binary(a);
	return 0;
}
