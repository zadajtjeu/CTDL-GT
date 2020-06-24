#include <bits/stdc++.h>

using namespace std;

void vunDong(int x[], int k, int n) {
	if (k <= n/2-1) {
		int j = 2 * k + 1;
		if (j < n-1 && x[j] < x[j+1])
			j = j + 1;
		if (x[k] < x[j]) {
			int tg = x[k];
			x[k] = x[j];
			x[j] = tg;
			vunDong(x,j,n);
		}
	}
}

void taoDongDauTien(int x[], int n)
{
	for (int k=n/2-1; k>=0; k--)
		vunDong(x, k, n);
}

void heapSort(int x[], int n)
{
	taoDongDauTien(x,n);
	for (int i=n; i>=2; i--)
	{
		int tg = x[0];
		x[0] = x[i-1];
		x[i-1] = tg;
		vunDong(x, 0, i-1);
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
	heapSort(A,n);
	show(A,n);
	return 0;
}