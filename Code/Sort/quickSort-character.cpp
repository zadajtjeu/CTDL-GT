#include <bits/stdc++.h>

using namespace std;

void quickSort(char A[10][20], int left, int right)
{
	if (left<right)
	{
		int k = (left+right)/2;
		char t[20];
		strcpy(t, A[k]);
		int i = left, j = right;

		do{
			while(strcmp(A[i], t) < 0)
				i++;
			while(strcmp(A[j], t) > 0)
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
	quickSort(A,0,n-1);
	show(A,n);
	return 0;
}