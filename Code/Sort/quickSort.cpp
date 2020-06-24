#include <bits/stdc++.h>

using namespace std;

void quickSort(int A[], int left, int right)
{
	if (left<right)
	{
		int k = (left+right)/2;
		int t = A[k];
		int i = left, j = right;

		do{
			while(A[i] < t)
				i++;
			while(A[j] > t)
				j--;
			if (i <= j)
			{
				swap(A[i], A[j]);
				i++; j--;
			}
		}while(i<=j);

		quickSort(A,left,j);
		quickSort(A,i,right);
	}
}


void createNumber(int A[], int n)
{
	srand((int)time(0));
	for (int i = 0; i < n; ++i)
	{
		A[i] = -10000 + rand() %(10000- (-10000) + 1);
	}
}

void show(int A[], int n)
{
	for (int i = 0; i < n; ++i)
	{
		cout<<A[i]<<" ";
	}
}

int main(int argc, char const *argv[])
{
	int n = 20;
	int *A = new int[n];

	createNumber(A,n);
	show(A,n);
	cout<<endl;
	quickSort(A,0,n-1);
	show(A,n);
	return 0;
}