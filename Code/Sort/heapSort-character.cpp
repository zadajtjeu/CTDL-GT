#include <bits/stdc++.h>

using namespace std;

void vunDong(char x[10][20], int k, int n) {
	if (k <= n/2-1) {
		int j = 2 * k + 1;
		if (j < n-1 && strcmp(x[j], x[j+1]) < 0)
			j = j + 1;
		if (strcmp(x[k], x[j]) < 0) {
			swap(x[k], x[j]);
			vunDong(x,j,n);
		}
	}
}

void taoDongDauTien(char x[10][20], int n)
{
	for (int k=n/2-1; k>=0; k--)
		vunDong(x, k, n);
}

void heapSort(char x[10][20], int n)
{
	taoDongDauTien(x,n);
	for (int i=n; i>=2; i--)
	{
		swap(x[0], x[i-1]);
		vunDong(x, 0, i-1);
	}
}



void show(char A[10][20], int n)
{
	for (int i = 0; i < n; ++i)
	{
		cout<<A[i]<<"\t";
	}
	cout<<endl;
}

int main(int argc, char const *argv[])
{
	char A[10][20] = {"John", "Wen", "Ozil", "Thor", "Merci", "Adam", "Dany", "Terry", "Henry", "Ronal"};
	int n=10;
	cout<<"Danh sach tao: "<<endl;
	show(A,n);
	heapSort(A,n);
	show(A,n);
	return 0;
}