#include <bits/stdc++.h>

using namespace std;

struct Student
{
	int codeST;
	char firstName[30], lastName[9];
	int birth;
	float AVGscore;
};

void input(Student *ds, int n)
{
	cout<<"## Nhap danh sach "<<n<<" hoc sinh: "<<endl;
	for (int i = 0; i < n; ++i)
	{
		cout<<"* Nhap thong tin sinh vien thu "<<i+1<<": "<<endl;
		cout<<" - Ma hoc sinh: "; cin>>ds[i].codeST;
		cout<<" - Ho dem: "; fflush(stdin); gets(ds[i].firstName);
		cout<<" - Ten: ";gets(ds[i].lastName);
		cout<<" - Nam sinh: "; cin>>ds[i].birth;
		cout<<" - Diem: "; cin>>ds[i].AVGscore;
	}
}

void show(Student *ds, int n)
{
	cout<<setw(10)<<left<<"St Code";
	cout<<setw(20)<<"First Name";
	cout<<setw(10)<<"Name";
	cout<<setw(10)<<right<<"BirthD";
	cout<<setw(10)<<"Score";
	cout<<endl;
	for (int i = 0; i < n; ++i)
	{
		cout<<setw(10)<<left<<ds[i].codeST;
		cout<<setw(20)<<left<<ds[i].firstName;
		cout<<setw(10)<<left<<ds[i].lastName;
		cout<<setw(10)<<right<<ds[i].birth;
		cout<<setw(10)<<ds[i].AVGscore;
		cout<<endl;
	}
	
}

void buddleSortbyName(Student *ds, int n)
{
	for (int i = 1; i < n; ++i)
	{
		for (int j = n-1; j >= i; --j)
		{
			if (strcmp(ds[j].lastName , ds[j-1].lastName) < 0 )
			{
				Student tmp = ds[j];
				ds[j] = ds[j-1];
				ds[j-1] = tmp;
			}
		}
	}

	cout<<"\n## Sau khi xep theo ten ##\n";
	show(ds,n);
}

void insertionSortbyScore(Student *ds, int n)
{
	for (int i = 1; i < n; ++i)
	{
		Student tam = ds[i];
		int j = i-1;
		while(j>-1 && ds[j].AVGscore < tam.AVGscore)
		{
			ds[j+1] = ds[j];
			j--;
		}
		ds[j+1] = tam;
	}
	cout<<"\n## Sau khi xep theo diem ##\n";
	show(ds,n);
}

int main(int argc, char const *argv[])
{
	Student *ds;
	int n;
	cout<<"# Nhap so hoc sinh: "; cin>>n;

	ds = new Student[n];

	input(ds,n);
	show(ds,n);
	buddleSortbyName(ds,n);
	insertionSortbyScore(ds,n);
	return 0;
}

/*
5
1
Pham Thanh
Nam
2000
7.5
2
Le Van
Luong
2001
6.5
3
Dang Van
An
1996
8
4
Ha Xuan
Tung
2000
4
5
Le Thi
La
2000
8

*/