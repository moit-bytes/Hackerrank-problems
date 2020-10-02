#include<iostream>
using namespace std;
#define n 3
#define INF 9999
void print(int g[n][n]);
void allpair(int g[n][n]);
int main()
{
	int graph[n][n]={{0,3,INF},{8,0,2},{4,INF,0}};
	print(graph);
	allpair(graph);
	
}
void print(int g[][n])
{
	int i,j;
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			if(g[i][j]==INF)
			cout<<"INF"<<" ";
			else
			cout<<g[i][j]<<" ";
		}
		cout<<endl;
	}
}
void allpair(int g[][n])
{
	int i,j,k;
	for(k=0;k<n;k++)
	{
		for(i=0;i<n;i++)
		{
			for(j=0;j<n;j++)
			{
				if((g[i][k]+g[k][j])<g[i][j])
				{
					g[i][j]=g[i][k]+g[k][j];
				}
				
			}
		}
		cout<<endl;
		print(g);
	}
	
}
