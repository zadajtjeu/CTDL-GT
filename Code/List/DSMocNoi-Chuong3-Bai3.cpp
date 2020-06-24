#include <bits/stdc++.h>

using namespace std;
struct SinhVien
{
	int maSV;
	char hoDem[30];
	char ten[9];
	char gioitinh[5];
	int namSinh;
	double diemTK;
};


struct Node
{
	SinhVien infor;
	Node *next;
};

typedef Node* TRO;


//tao moi danh sach rong
void creat(TRO &L)
{
	L= NULL;
}
//kiem tra danh sach rong
int empty(TRO &L)
{
	return L == NULL;
}

//Nhap thong tin cho i sv
SinhVien taosv(	int maSV, char hoDem[30], char ten[9], char gioitinh[5], int namSinh, double diemTK)
{
	SinhVien sv;
	sv.maSV =maSV;
	strcpy(sv.hoDem, hoDem);
	strcpy(sv.ten, ten);
	strcpy(sv.gioitinh,gioitinh);
	sv.namSinh = namSinh;
	sv.diemTK =diemTK;
	return sv;
}

//in thong tin sv
void display(SinhVien sv)
{
	cout<<fixed;
	cout<<setw(8)<<left<<sv.maSV;
	cout<<setw(15)<<sv.hoDem;
	cout<<setw(9)<<sv.ten;
	cout<<setw(8)<<sv.gioitinh;
	cout<<setw(10)<<right<<sv.namSinh;
	cout<<setw(10)<<setprecision(2)<<sv.diemTK;
	cout<<endl;
}
//chen 1 nut vao cuoi danh sach
void add(TRO &L, SinhVien sv)
{
	TRO Q = L,P = new Node;
	P->infor = sv;
	P->next = NULL;
	if(empty(L))
		L = P;
	else{
		while(Q->next != NULL)
			Q = Q->next;
		Q->next = P;
	}
		
}


//taomot danh sach moi
void create_List(TRO &L)
{
	add(L, taosv(1001,"Tran Van", "Thanh", "Nam",1997,7.5));
	add(L, taosv(1002,"Nguyen Thi", "Hong", "Nu",1998,7.2));
	add(L, taosv(1003,"Nguyen Van", "Hung", "Nam",1996,6.4));
	add(L, taosv(1004,"Bui Thi", "Bich", "Nu",1998,8.6));
	add(L, taosv(1005,"Duong Van", "Giang", "Nam",1997,6.8));
}

void showList(TRO L)
{
	TRO Q;
	if (!empty(L))
	{
		cout<<fixed;
		cout<<setw(8)<<left<<"Ma SV";
		cout<<setw(15)<<"Ho Dem";
		cout<<setw(9)<<"Ten";
		cout<<setw(8)<<"GT";
		cout<<setw(10)<<right<<"Nam Sinh";
		cout<<setw(10)<<"Diem";
		cout<<endl;
		Q = L;
		while(Q != NULL)
		{
			display(Q->infor);
			Q = Q->next;
		}
	}
	else
	{
		cout<<" !!! Danh sach rong !!!\n";
	}
}

void xoa_pt_dau(TRO &L)
{
	if (empty(L))
	{
		cout<<" !!! Danh sach rong !!!\n";
		return;
	}
	TRO Q = L;
	L = L->next;
	delete Q;
	cout<<"=========== DANH SACH SAU KHI XOA PHAN TU DAU TIEN ===========\n";
	showList(L);
}

//ham tim vi tri thu k-1
TRO search_k(TRO L,int k)
{
	int d = 1;
	TRO Q =L;
	while(d < k-1 && Q->next != NULL)
	{
		d++;
		Q = Q->next;
	}
	if (d<k-1) // danh sach it hon k-1 phan tu
	{
		return NULL;
	}
	return Q;
}
void insert(TRO &L,TRO Q,SinhVien sv)
{
	TRO P;
	P = new Node;
	P->infor = sv;
	P->next = Q->next;
	Q->next = P;
}

void chen_vt_thu3(TRO &L)
{
	TRO Q = search_k(L,3);
	if (Q ==NULL)
	{
		cout<<" !!! khong the chen !!!";
		return;
	}
	insert(L,Q, taosv(1006,"Le Thi","Doan","Nu", 1998, 7.6));
	cout<<"=========== DANH SACH SAU KHI CHEN ===========\n";
	showList(L);
}

void selectionSort(TRO L)
{
	TRO P, Q, M;
	P = L;
	while (P->next !=NULL)
	{
		M = P;
		Q = P->next;
		while(Q != NULL)
		{
			if (strcmp(Q->infor.ten, M->infor.ten)<0)
			{
				M = Q;
			}
			Q = Q->next;
		}
		SinhVien tg = P->infor;
		P->infor = M->infor;
		M->infor = tg;
		P = P->next;
	}


	cout<<"=========== DANH SACH SAU KHI SAP XEP ===========\n";
	showList(L);
}

int main(int argc, char const *argv[])
{
	TRO L;
	creat(L);
	create_List(L);
	cout<<"=========== DANH SACH VUA TAO ===========\n";
	showList(L);

	xoa_pt_dau(L);
	chen_vt_thu3(L);
	selectionSort(L);
	return 0;
}