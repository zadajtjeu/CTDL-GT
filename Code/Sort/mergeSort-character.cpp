#include <bits/stdc++.h>

using namespace std;


void merge (char X[9][20],int bt1,int w1,int bt2,int w2, char Z[9][20]) {
	int i=bt1, j=bt2, bp1=bt1+w1-1, bp2=bt2+w2-1, k=bt1;
	while (i<=bp1 && j<=bp2) {
		if (strcmp(X[i], X[j]) < 0){
			strcpy(Z[k],X[i]);
			i++; k++;
		}
		else {
			strcpy(Z[k], X[j]);
			j++; k++;
		}
	}
	while (i<=bp1) {
		strcpy(Z[k], X[i]);
		i++; k++;
	}
	while (j<=bp2) {
		strcpy(Z[k], X[j]);
		j++; k++; 
	}
}

void mergePass(char X[9][20],int n,int K,char Z[9][20]){

	int cv = n/(2*K); 
	int s = 2*K*cv;
	int r = n-s;

	for (int j=1; j<=cv; j++){
		int b1 = (2*j -2)*K;
		merge(X, b1, K, b1+K, K, Z);
	}
	if (r<=K)
		for (int j=0; j<r; j++)
			strcpy(Z[s+j], X[s+j]);
	else
		merge(X, s,K, s+K, r-K, Z);
}

void mergeSort (char X[9][20],int n)
{
	int K = 1;
	char Z[n][20];
	while (K < n)
	{
		mergePass(X, n, K, Z);
		mergePass(Z, n, 2*K, X);
		K = K*4;
	}
}





void show(char A[9][20], int n)
{
	for (int i = 0; i < n; ++i)
	{
		cout<<A[i]<<"\t";
	}
	cout<<endl;
}

int main(int argc, char const *argv[])
{
	char A[9][20] = {"John", "Wenger", "Anna", "Henry", "Thor", "Terry", "Ozil", "Adam", "Dennis"};
	int n=9;
	cout<<"Danh sach tao: "<<endl;
	show(A,n);
	mergeSort(A,n);
	show(A,n);
	return 0;
}