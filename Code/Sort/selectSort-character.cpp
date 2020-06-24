#include <bits/stdc++.h>

using namespace std;

void selectSort(char x[10][20], int n)
{
	for (int i = 0; i < n-1; ++i)
	{
		int min_index = i;
		for (int j = i+1; j < n; ++j)
		{
			if (strcmp(x[j], x[min_index]) < 0)
			{
				min_index = j;
			}
		}
		char tmp[20];
		strcpy(tmp, x[i]);
		strcpy(x[i], x[min_index]);
		strcpy(x[min_index], tmp);
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
	selectSort(x,n);
	show(x,n);
	return 0;
}