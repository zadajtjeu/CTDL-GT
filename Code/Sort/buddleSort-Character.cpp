#include <bits/stdc++.h>

using namespace std;

void buddleSort(char A[10][20], int n)
{
	for (int i = 1; i < n; ++i)
	{
		for (int j = n-1; j >= i; --j)
		{
			if (strcmp(A[j] , A[j-1]) < 0 )
			{
				char tmp[20];
				strcpy(tmp, A[j]);
				strcpy(A[j], A[j-1]);
				strcpy(A[j-1], tmp);
			}
		}
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
	buddleSort(A,n);
	show(A,n);
	return 0;
}