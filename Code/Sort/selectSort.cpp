#include <bits/stdc++.h>

using namespace std;

void selectSort(int x[], int n)
{
	for (int i = 0; i < n-1; ++i)
	{
		int min_index = i;
		for (int j = i+1; j < n; ++j)
		{
			if (x[j] < x[min_index])
			{
				min_index = j;
			}
		}
		swap(x[i], x[min_index]);
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
	selectSort(x,n);
	show(x,n);
	return 0;
}