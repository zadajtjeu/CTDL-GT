#include <iostream>

using namespace std;

int binarySearch(int x[], int l, int r, int key) {
	if (r < l) return -1;
	else {
		int m = (l + r) / 2;
		if (x[m] == key) 
			return m;
		else if (x[m] > key) 
			return binarySearch(x, l, m - 1, key);
		else 
			return binarySearch(x, m + 1, r, key);
	}
}

int main(int argc, char const *argv[])
{
	int A[9] = {4, 14, 24, 34, 54, 64, 74, 84, 94};
	int n = 9, k1 = 64, k2 = 45;

	int vt1 = binarySearch(A,0,n,k1);
	if (vt1 != -1)
		cout<<"Tim thay so "<<k1<<" o vi tri "<<vt1+1<<" trong day"<<endl;
	else
		cout<<"Khong tim thay so "<<k1<<" trong day"<<endl;

	int vt2 = binarySearch(A,0,n,k2);
	if (vt2 != -1)
		cout<<"Tim thay so "<<k2<<" o vi tri "<<vt2+1<<" trong day"<<endl;
	else
		cout<<"Khong tim thay so "<<k2<<" trong day"<<endl;
	return 0;
}
