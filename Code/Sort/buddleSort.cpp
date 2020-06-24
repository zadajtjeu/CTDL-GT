#include <bits/stdc++.h>

using namespace std;

void buddleSort(int A[], int n)
{
	for (int i = 1; i < n; ++i)
	{
		for (int j = n-1; j >= i; --j)
		{
			if (A[j] > A[j-j])
			{
				swap(A[j], A[j-1]);
			}
		}
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
	int n = 20000;
	int *A = new int[n];

	createNumber(A,n);
	//show(A,n);
	cout<<endl;
	buddleSort(A,n);
	//show(A,n);
	return 0;
}