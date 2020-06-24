#include <bits/stdc++.h>

using namespace std;

#define MAX 8
struct SinhVien
{
	int maSV;
	char hoDem[25];
	char ten[9];
	char gioiTinh[5];
	int namSinh;
	double dienTK;
};

struct List
{
	int count;
	SinhVien e[MAX];
};


SinhVien taosv(int ma,char *hd, char *ten, char *gt, int y, double d)
{
	SinhVien sv;
	sv.maSV = ma;
	strcpy(sv.hoDem,hd);
	strcpy(sv.ten, ten);
	strcpy(sv.gioiTinh, gt);
	sv.namSinh = y;
	sv.dienTK = d;
	return sv;
}
void create(List &L)
{
	L.count = -1;
}

int empty(List L)
{
	return (L.count == -1);
}

int full(List L)
{
	return (L.count == MAX-1);
}

int add(List &L, SinhVien sv)
{
	if (full(L))
	{
		return 0;	
	}else{
		L.count++;
		L.e[L.count] = sv;
		return 1;
	}
}



void input(List &L)
{
	add(L, taosv(1001, "Tran Van", "Thanh", "Nam", 1997, 7.5));
	add(L, taosv(1002, "Nguyen Thi", "Huong", "Nu", 1998, 7.2));
	add(L, taosv(1003, "Nguyen Van", "Binh", "Nam", 1996, 6.4));
	add(L, taosv(1004, "Bui Thi", "Hong", "Nu", 1998, 8.6));
	add(L, taosv(1005, "Duong Van", "Giang", "Nam", 1997, 6.8));
}



void showSV(SinhVien sv)
{
	cout<<fixed;
	cout<<setw(8)<<left<<sv.maSV;
	cout<<setw(15)<<left<<sv.hoDem;
	cout<<setw(10)<<left<<sv.ten;
	cout<<setw(8)<<left<<sv.gioiTinh;
	cout<<setw(6)<<right<<sv.namSinh;
	cout<<setw(10)<<setprecision(1)<<sv.dienTK;
	cout<<endl;
}

void showList(List L)
{
	cout<<fixed;
	cout<<setw(8)<<left<<"Ma SV";
	cout<<setw(15)<<left<<"Ho dem";
	cout<<setw(10)<<left<<"Ten";
	cout<<setw(8)<<left<<"G.Tinh";
	cout<<setw(6)<<right<<"Nam Sinh";
	cout<<setw(10)<<"Diem TK";
	cout<<endl;

	for (int i = 0; i <= L.count; ++i)
	{
		showSV(L.e[i]);
	}
}


int remove(int k, List &L)
{
	if (k <= L.count+1 && k>0)
	{
		for (int i = k; i <= L.count; ++i)
		{
			L.e[i-1] = L.e[i];
		}
		L.count--;
		return 1;
	}
	return 0;
}

int insert(List &L, int k, SinhVien sv)
{
	if (k<L.count+1 && k>0 && !full(L))
	{
		for (int i = L.count; i >= k-1; --i)
		{
			L.e[i+1] = L.e[i];
		}
		L.e[k-1] = sv;
		L.count++;
		return 1;
	}
	return 0;
}

void selectionSort(List &L)
{
	for (int i = 0; i < L.count; ++i)
	{
		int min_idx = i;
		for (int j = i+1; j <= L.count; ++j)
		{
			if (strcmp(L.e[j].ten,L.e[min_idx].ten)<0)
			{
				min_idx = j;
			}
		}

		if (min_idx != i)
		{
			SinhVien temp = L.e[i];
			L.e[i] = L.e[min_idx];
			L.e[min_idx] = temp;
		}
	}
}
int main(int argc, char const *argv[])
{
	List L;
	create(L);
	input(L);
	cout<<"=============== DANH SACH SINH VIEN ==============="<<endl;
	showList(L);

	if (remove(1,L))
	{
		cout<<"Xoa thanh cong....! Phan tu thu nhat dda bi xoa...."<<endl;
		cout<<"=============== DANH SACH SINH VIEN ==============="<<endl;
		showList(L);
	}
	else{
		cout<<"Loi xu ly, danh sach rong hoac k khong hop le!"<<endl;
	}

	if (insert(L,3,taosv(1006, "Le Thi", "Doan", "Nu", 1998, 7.6)))
	{
		cout<<"Chen sinh vien thanh cong....!"<<endl;
		cout<<"=============== DANH SACH SINH VIEN ==============="<<endl;
		showList(L);
	}
	else
	{
		cout<<"DS day hoac vi tri khong hop le!"<<endl;
	}


	selectionSort(L);
	cout<<"=============== DANH SACH SINH VIEN ==============="<<endl;
	showList(L);
	return 0;
}