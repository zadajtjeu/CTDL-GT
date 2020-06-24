#include <bits/stdc++.h>

using namespace std;

void insertionSort(int x[], int n)
{
	for (int i = 1; i < n; ++i)
	{
		int tam = x[i];
		int j = i-1;
		while(j>-1 && x[j] < tam)
		{
			x[j+1] = x[j];
			j--;
		}
		x[j+1] = tam;
	}
}


void createNumber(int x[], int n)
{
	srand((int)time(0));
	for (int i = 0; i < n; ++i)
	{
		x[i] = -1000 + rand() %(1000- (-1000) + 1);
	}
}

void show(int x[], int n)
{
	for (int i = 0; i < n; ++i)
	{
		cout<<x[i]<<" ";
	}
}

int main(int argc, char const *argv[])
{
	int n = 15;
	int *x = new int[n];

	createNumber(x,n);
	show(x,n);
	cout<<endl;
	insertionSort(x,n);
	show(x,n);
	return 0;
}