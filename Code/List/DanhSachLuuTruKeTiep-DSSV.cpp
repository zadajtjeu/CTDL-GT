#include <bits/stdc++.h>

using namespace std;

#define MAX 10
struct SinhVien
{
	char hoTen[30];
	char gioiTinh[4];
	int tuoi;
	double dienTK;
};

struct List
{
	int count;
	SinhVien e[MAX];
};


SinhVien taosv(char *ht, char *gt, int t, double d)
{
	SinhVien sv;
	strcpy(sv.hoTen,ht);
	strcpy(sv.gioiTinh, gt);
	sv.tuoi = t;
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
	add(L, taosv("Bui Van A", "Nam",20, 7.6));
	add(L, taosv("Bui Thi B", "Nu",21, 8.6));
	add(L, taosv("Bui Van C", "Nam",20,6.6));
	add(L, taosv("Bui Van D", "Nam",22, 9.6));
	add(L, taosv("Bui Van E", "Nam",20, 5.6));
}

void showSV(SinhVien sv)
{
	cout<<fixed;
	cout<<setw(20)<<left<<sv.hoTen;
	cout<<setw(8)<<left<<sv.gioiTinh;
	cout<<setw(6)<<right<<sv.tuoi;
	cout<<setw(10)<<setprecision(1)<<sv.dienTK;
	cout<<endl;
}

void showList(List L)
{
	cout<<fixed;
	cout<<setw(20)<<left<<"Ho Ten";
	cout<<setw(8)<<left<<"GTinh";
	cout<<setw(6)<<right<<"Tuoi";
	cout<<setw(10)<<setprecision(1)<<" Dien TK";
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

int main(int argc, char const *argv[])
{
	List L;
	create(L);
	input(L);
	cout<<"=============== DANH SACH SINH VIEN ==============="<<endl;
	showList(L);

	if (remove(3,L))
	{
		cout<<"Xoa thanh cong....!"<<endl;
		cout<<"=============== DANH SACH SINH VIEN ==============="<<endl;
		showList(L);
	}
	else{
		cout<<"Loi xu ly, danh sach rong hoac k khong hop le!"<<endl;
	}


	if (insert(L,2,taosv("Phan Ba V", "Nam", 21, 9.1)))
	{
		cout<<"Chen sinh vien thanh cong....!"<<endl;
		cout<<"=============== DANH SACH SINH VIEN ==============="<<endl;
		showList(L);
	}
	else
	{
		cout<<"DS day hoac vi tri khong hop le!"<<endl;
	}
	return 0;
}