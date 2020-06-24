#ifndef _TINHTONGDEQUY_H
#define _TINHTONGDEQUY_H
#include <math.h>
#include <stdio.h>
#define MAX 100
/*******************TINH TONG BANG PP DE QUY*******************************/

int bai01(int n);//Bai 1: tinh tong s= 1+ 2+ 3+.....+n
int bai02(int n);//Bai 02: Tinh tong: S(n)= 1^2+ 2^2+ 3^2+...+ n^2
float bai03(int n);//Bai 03: tinh tong S(n)= 1+ 1/2+ 1/3+...+ 1/n
float bai04(int n);//Bai 04: Tinh tong S(n)= 1/2+ 1/4+ 1/6+..+1/(2*n)
float bai05(int n);//Bai 05: Tinh tong S(n)= 1+ 1/3+ 1/5+...+1/(2n+1)
float bai06(int n);//Bai 06: tinh tong S(n)= 1/1*2+ 1/2*3+ 1/3*4+ ...+ 1/(n* (n+1))
float bai07(int n);//Bai 07: Tinh Tong S(n)= 1/2+ 2/3+ 3/4+...+n/n+1
float bai08(int n);//Bai 08: Tinh Tong S(n)= 1/2+ 3/4+ 5/6+...+2n+1/2n+2
int bai09(int n);//Bai 09: tinh giai thua
int bai10(int x, int n);//Bai 10: Tinh T(x, n)= x^n;
long bai11(int n);//Bai 11: Tinh S(n)= 1+ 1.2+ 1.2.3+...+ 1.2.3....n
int bai12(int x, int n);//Bai 12: Tinh S(x,n)= x+ x^2+ x^3+...x^n
int bai13(int x, int n);//Bai 13: Tinh tong S(x,n)= x^2+ x^4+ x^6+...+ x^2n
int bai14(int x, int n);//Bai 14: Tinh tong S(x,n)= x^1+ x^3+ x65+...+x^(2n+1) 
float bai15(int n);//Bai 15: Tinh tong S(n)= 1+ 1/(1+2)+ 1/(1+2+3)+...+ 1/(1+2+3+...+n)
float bai16(int x, int n); //Bai 16: Tinh tong S(n)= x+ x^2/2!+ x^3/3!+...x^n/n!
float bai17(int x, int n); //Bai 17: Tinh Tong S(n)= 1+ x^2/2!+ x^4/4!+...+ x^(2n)/(2n)!
float bai18(int n); //Bai 18: Tinh S(n)= sqrt(2+ sqr(2+ sqrt(2+ ...+sqrt(2))) co n dau can
float bai19(int n); //Bai 19: Tinh Tong S(n)= sqrt(n+ sqrt(n- 1)+ sqrt(n-1+...+ sqrt(1))) co n dau can
float bai20(int n); //Bai 20: Tin tong S(n)= sqrt(1+ sqrt(2+ sqrt(3+...+sqrt(n))))
float bai21(int n); //Bai 21: Tinh Tong S(n)= 1+ 1/ 1+ 1/ 1+ 1/ 1+...1/ 1+1 co n dau chia

/**********************KIEM TRA- TINH TOAN*******************************************/
int bai22(int n);//Bai 22: tim uoc so le lon nhat cua n
int bai23(int n);//Bai 23: Dem so luong chu so cua so nguyen duong n
int bai24(int n);//Bai 24: tinh tong cac chu so cua so nguyen duong n
int bai25(int n);//Bai 25: Tinh tich cac chu so cua so nguyen duong n
int bai26(int n);//Bai 26: dem cac chu so le cua so nguyen duong n
int bai27(int n);//Bai 27:Tinh tong cac so chan cua n
int bai28(int n);//Bai 28: Tinh tich cac so le cua so nguyen duong n
int bai29(int n);//Bai 29: Tim chu so dau tien cua so nguyen duong n
void bai30(int n); //Bai 30: Dao nguoc so nguyen n
int bai31(int n, int max); // Bai 31:Tim chu so lon nhat cua so nguyen duong n
int bai32(int n); //Bai 32: Kiem tra so nguyen duong n co toan chu so le khong
int bai33(int a, int b); //Bai 33: Tim UCLN cua hai so nguyen duong
int bai34(int a, int b);//Bai 34: Tinh gia tri	phan tu tai dong a va cot b cua tam gia pascal
long bai35(int n,int k); //Bai 35: Tinh gia tri C(n, k)= k!/ (n!- (n-k)!)
void bai36(int n); //Bai 36: Doi mot so o he thap phan sang he co so khac

/*********************CAC THAO TAC TREN MANG MOT CHIEU*********************************/
void nhapMang(int a[], int n);//nhap mang
void bai37(int a[], int n);//Bai 37: Xuat mang
int bai38(int a[], int n);//Bai 38: tinh tong cac phan tu trong mang
int bai39(int a[], int n); //Bai 39: tim so nho nhat trong mang
int bai40(int a[], int n);//Bai 40: kiem tra mang co phai toan so duong 
#endif