#include <bits/stdc++.h>

using namespace std;
struct SinhVien
{
	int maSV;
	char hoTen[30];
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
void input(SinhVien &sv)
{
	cout<<" - Nhap vao ma sinh vien: ";
	cin>>sv.maSV;
	cout<<" - Nhap ho ten: ";
	fflush(stdin); gets(sv.hoTen);
	cout<<" - Nhap nam sinh: ";
	cin>>sv.namSinh;
	cout<<" - Nhap diem tong ket: ";
	cin>>sv.diemTK;
}

//in thong tin sv
void display(SinhVien sv)
{
	cout<<fixed;
	cout<<setw(8)<<left<<sv.maSV;
	cout<<setw(15)<<sv.hoTen;
	cout<<setw(10)<<right<<sv.namSinh;
	cout<<setw(10)<<setprecision(2)<<sv.diemTK;
	cout<<endl;
}
//chen 1 nut vao cuoi danh sach
void add(TRO &L, SinhVien elem)
{
	TRO P,Q;
	P = new Node;
	P->infor = elem;
	Q->next = NULL;
	if (L == NULL)
	{
		L = P;
	}
	else
	{
		Q = L;
		while(Q->next != NULL)
			Q = Q->next;
		Q->next = P;
	}
}


//taomot danh sach moi
void input_List(TRO &L)
{
	TRO P, Q = NULL;
	SinhVien elem;
	char tieptuc;

	creat(L);

	do
	{
		input(elem);
		P= new Node;
		P->infor = elem;
		P->next = NULL;
		if (L == NULL)
		{
			L = P;
		}
		else
		{
			Q->next = P;
		}

		Q = P;
		cout<<"! Co nhap tiep khong? (C/K): ";
		cin>>tieptuc;
	}while(toupper(tieptuc) == 'C');
}

void showList(TRO L)
{
	TRO Q;
	if (!empty(L))
	{
		cout<<fixed;
		cout<<setw(8)<<left<<"Ma SV";
		cout<<setw(15)<<"Ho Ten";
		cout<<setw(10)<<right<<"Nam Sinh";
		cout<<setw(10)<<"Diem TK";
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

// chieu dai danh sach
int lenghtList(TRO L)
{
	int count=0;
	TRO Q = L;
	while(Q != NULL)
	{
		count++;
		Q = Q->next;
	}
	return count;
}

//tim kiem
TRO search(TRO L, int masv)
{
	TRO Q = L;
	while(Q != NULL && Q->infor.maSV != masv)
		Q = Q->next;
	return Q;
}


int main(int argc, char const *argv[])
{
	TRO L;
	creat(L);
	input_List(L);
	cout<<"=========== DANH SACH NHAP ===========\n";
	showList(L);
	cout<<" Co tong cong "<<lenghtList(L)<<" sinh vien. \n";

	int ma;
	cout<<" * Ma sinh vien can tim: "; cin>>ma;
	TRO Q = search(L,ma);
	if (Q == NULL)
	{
		cout<<"!!! Khong tim thay sinh vien co ma "<<ma<<" trong danh sach !!!\n";
	}
	else
	{
		cout<<"=========== Thong tin sinh vien co ma "<<ma<<" ===========\n";
		display(Q->infor);
	}
	return 0;
}