#include <iostream>

using namespace std;

#define MAX 32
typedef unsigned MaNhiPhan;
struct Stack
{
	int top;
	MaNhiPhan e[MAX];
};

//khoi tao ngan xep rong
void initStack(Stack &S)
{
	S.top = -1;
}

//kiem tra rong
int empty(Stack S)
{
	return (S.top == -1);
}

int full(Stack S)
{
	return (S.top == MAX-1);
}

//bo xung 1 phan tu vao dinh
int push(Stack &S, MaNhiPhan elem)
{
	if (full(S))
		return 0;
	else
	{
		S.top += 1;
		S.e[S.top] = elem;
		return 1;
	}
}

//lay 1 pt ow dinh
int pop(Stack &S, MaNhiPhan &elem)
{
	if (empty(S))
	{
		return 0;
	}
	else
	{
		elem = S.e[S.top];
		S.top--;
		return 1;
	}
}

//doi thap phan sang nhiphan

void change(unsigned long N, Stack &S)
{
	initStack(S);
	while(N>0 && push(S, N%2))
		N /= 2;
}

//hien thi ma nhi phan
void display(Stack S)
{
	MaNhiPhan elem;
	while(pop(S, elem))
		cout<<elem<<" ";
}

int main(int argc, char const *argv[])
{
	unsigned long N=256;
	Stack S;
	change(N,S);
	display(S);
	return 0;
}