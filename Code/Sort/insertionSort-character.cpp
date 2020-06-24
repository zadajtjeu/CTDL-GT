#include <bits/stdc++.h>

using namespace std;

void insertionSort(char x[10][20], int n)
{
	for (int i = 1; i < n; ++i)
	{
		char tam[20];
		strcpy(tam, x[i]);
		int j = i-1;
		while(j>-1 && strcmp(x[j],tam)>0)
		{
			strcpy(x[j+1],x[j]);
			j--;
		}
		strcpy(x[j+1],tam);
	}
}



void show(char x[10][20], int n)
{
	for (int i = 0; i < n; ++i)
	{
		cout<<x[i]<<"\t";
	}
	cout<<endl;
}

int main(int argc, char const *argv[])
{
	char x[10][20] = {"John", "Wen", "Ozil", "Thor", "Merci", "Adam", "Dany", "Terry", "Henry", "Ronal"};
	int n=10;
	cout<<"Danh sach tao: "<<endl;
	show(x,n);
	insertionSort(x,n);
	show(x,n);
	return 0;
}