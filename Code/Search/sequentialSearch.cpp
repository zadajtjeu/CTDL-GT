#include <iostream>

using namespace std;

int sequentialSearch(int *array, int n, int k)
{
	for (int i = 0; i < n; ++i)
	{
		if (array[i] == k)
		{
			return i;
		}
	}
	return -1;
}

int main(int argc, char const *argv[])
{
	int A[9] = {34, 14, 24, 54, 84, 64, 94, 74, 4};
	int n = 9, k1 = 94, k2 = 45;

	int vt1 = sequentialSearch(A,n,k1);
	if (vt1 != -1)
		cout<<"Tim thay so "<<k1<<" o vi tri "<<vt1+1<<" trong day"<<endl;
	else
		cout<<"Khong tim thay so "<<k1<<" trong day"<<endl;

	int vt2 = sequentialSearch(A,n,k2);
	if (vt2 != -1)
		cout<<"Tim thay so "<<k2<<" o vi tri "<<vt2+1<<" trong day"<<endl;
	else
		cout<<"Khong tim thay so "<<k2<<" trong day"<<endl;
	return 0;
}
