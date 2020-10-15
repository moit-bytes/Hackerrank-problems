// Ascending order
// Bubble sort
#include<iostream>
#include<stdlib.h>
#include<time.h>
using namespace std;

void bubble_sort(int arr[], int l);
int main()
{
	int arr[10], l, i;
	srand(time(0));
	cout<<"\n\n The given array is : \n"<<"";
	for(i=0; i<10; i++)
	{
		arr[i] = rand()%100;
		cout<<arr[i]<<"\t";
	}
	l = sizeof(arr)/sizeof(int);
	bubble_sort(arr, l);
	cout<<"\n\n The sorted array is : \n";
	for(i=0; i<10; i++)
	{
		cout<<arr[i]<<"\t";
	}
	return 0;
}

void bubble_sort(int arr[], int l)
{
	int i,j,temp;
	for(i=0; i<l-1; i++)
	{
		for(j=0; j<l-1-i; j++)
		{
			if(arr[j]>arr[j+1])
			{
				temp = arr[j+1];
				arr[j+1] = arr[j];
				arr[j] = temp;
			}
		}
	}
}
