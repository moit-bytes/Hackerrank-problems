// A Dynamic Programming based solution for 0-1 Knapsack problem
#include<iostream>

using namespace std;

// A utility function that returns maximum of two integers
int max(int a, int b) { return (a > b)? a : b; }

// Returns the maximum value that can be put in a knapsack of capacity W
void knapSack(int W, int wt[], int val[], int n)
{
    int i, w;
    int K[n+1][W+1];
	int selected[n],p=2;
    // Build table K[][] in bottom up manner
    for (i = 0; i <= n; i++)
    {
        for (w = 0; w <= W; w++)
        {
            if (i==0 || w==0)
                K[i][w] = 0;
            else if (wt[i-1] <= w)
                    K[i][w] = max(val[i-1] + K[i-1][w-wt[i-1]], K[i-1][w]);
            else
                    K[i][w] = K[i-1][w];
        }
    }

    for (i = 0; i <= n; i++)
    {
        for (w = 0; w <= W; w++)
        {
            if (i==0 || w==0)
                cout<<K[i][w]<<"   ";
            else
                cout<<K[i][w]<<"  ";
        }
        cout<<endl;
    }
    int val1=K[n][W];
    for (i = 0; i <=n; i++)
    {
        for (w = 0; w <= W; w++)
        {
        	if(val1==K[n-i-1][w])
			{
			selected[p]=0;
			}			
        	else
        	{
			selected[p]=1;
        	val1=val1-wt[n-i-1];
			}
        }
        p--;
    }
    cout<<endl;
    for(i=0;i<n;i++)
    cout<<selected[i]<<" ";
}

int main()
{
	int val[] = {30, 10, 20};
	int wt[] = {2, 1, 3};
	int W = 5;
	int n = sizeof(val)/sizeof(val[0]);
	knapSack(W, wt, val, n);
	return 0;
}
