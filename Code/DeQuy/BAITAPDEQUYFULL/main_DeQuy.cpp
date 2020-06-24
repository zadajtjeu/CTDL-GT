#include <stdio.h>
#include <conio.h>
#include "libDeQuy.h"
#define MAX 100 //dung cho phan bai toan mang

int main()
{
	int n, x;
	int max= 0;//gia tri cung cho bai 31
	int a, b;//hai gia tri dung cho bai 33 va bai 34

	printf("\n\n******************************CAC BAI TOAN DE QUY CO BAN************************");

	do{
		printf("\nNhap vao n: ");
		scanf("%d", &n);
		if(n<= 0) printf("Ban nhap sai gia tri, Moi nhap lai!\n");
	}while(n<= 0);
	
	printf("\n\nNhap vao x: ");
	scanf("%d", &x);
	printf("\nNhap vao gia tri a: ");
	scanf("%d", &a);
	printf("\nNhap vao gia tri b: ");
	scanf("%d", &b);

	printf("\n\n******************************TINH TONG BANG PP DE QUY*************************");

	printf("\n\nBai 01: tinh tong: S(n)= 1+ 2+ 3+...+ n");
	printf("\nS= %d", bai01(n));

	printf("\n\nBai 02: Tinh Tong: S(n)= 1^2+ 2^2+ 3^2+...+ n^2");
	printf("\n\S= %d", bai02(n));

	printf("\n\nBai 03: tinh tong S(n)= 1+ 1/2+ 1/3+...+ 1/n");
	printf("\nS= %.2f", bai03(n));

	printf("\n\nBai 04: Tinh tong S(n)= 1/2+ 1/4+ 1/6+..+1/(2*n)");
	printf("\nS= %.2f", bai04(n));

	printf("\n\nBai 05: Tinh tong S(n)= 1+ 1/3+ 1/5+...+1/(2n+1)");
	printf("\nS= %.2f", bai05(n));

	printf("\n\nBai 06: tinh tong S(n)= 1/1*2+ 1/2*3+ 1/3*4+ ...+ 1/(n* (n+1))");
	printf("\nS= %.2f", bai06(n));

	printf("\n\nBai 07: Tinh Tong S(n)= 1/2+ 2/3+ 3/4+...+n/n+1");
	printf("\nS= %.2f", bai07(n));

	printf("\n\nBai 08: Tinh Tong S(n)= 1/2+ 3/4+ 5/6+...+2n+1/2n+2");
	printf("\nS= %.2f", bai08(n));

	printf("\n\nBai 09: Tinh T= 1*2*3*...*n");
	printf("\nT= %d", bai09(n));

	printf("\n\nBai 10: Tinh T= x^n");
	printf("\nT= %d", bai10(x, n));

	printf("\n\nBai 11: Tinh S= 1+ 1.2+ 1.2.3+...+ 1.2.3....n");
	printf("\nS= %d", bai11(n));

	printf("\n\nBai 12: Tinh S= x+ x^2+ x^3+...x^n");
	printf("\nS= %d", bai12(x, n));

	printf("\n\nBai 13: Tinh S= x^2+ x^4+ x^5+...x^2n");
	printf("\nS= %d", bai13(x, n));

	printf("\n\nBai 14: Tinh tong S(x,n)= x^1+ x^3+ x^5+...+x^(2n+1)");
	printf("\nS= %d", bai14(x, n));

	printf("\n\nBai 15: Tinh tong S(n)= 1+ 1/(1+2)+ 1/(1+2+3)+...+ 1/(1+2+3+...+n)");
	printf("\nS= %.2f", bai15(n));

	printf("\n\nBai 16: Tinh tong S(n)= x+ x^2/2!+ x^3/3!+...x^n/n!");
	printf("\nS= %.2f", bai16(x, n));

	printf("\n\nBai 17: Tinh Tong S(n)= 1+ x^2/2!+ x^4/4!+...+ x^(2n)/(2n)!");
	printf("\nS= %.2f", bai17(x, n));

	printf("\n\nBai 18: Tinh S(n)= sqrt(2+ sqr(2+ sqrt(2+ ...+sqrt(2))) co n dau can");
	printf("\nS= %.2f", bai18(n));

	printf("\n\nBai 19: Tinh Tong S(n)= sqrt(n+ sqrt(n- 1)+ sqrt(n-1+...+ sqrt(1))) co n dau can");
	printf("\nS= %.2f", bai19(n));

	printf("\n\nBai 20: Tin tong S(n)= sqrt(1+ sqrt(2+ sqrt(3+...+sqrt(n))))");
	printf("\nS= %.2f", bai20(n));

	printf("\n\nBai 21: Tinh Tong S(n)= 1+ 1/ 1+ 1/ 1+ 1/ 1+...1/ 1+1 co n dau chia");
	printf("\nS= %.2f", bai21(n));

	printf("\n\n***************************KIEM TRA- TINH TOAN BANG DE QUY**********************");

	printf("\n\nBai 22: tim uoc so le lon nhat cua n");
	printf("\nUoc So le lon nhat cua n la: %d", bai22(n));
		
	printf("\n\nBai 23: dem so luong chu so cua so nguyen duong n");
	printf("\n%d co so luong chu so la: %d", n, bai23(n));

	printf("\n\nBai 24: tinh tong cac chu so cua so nguyen duong n");
	printf("\nS= %d", bai24(n));

	printf("\n\nBai 25: Tinh tich cac chu so cua so nguyen duong n");
	printf("\nT= %d", bai25(n));

	printf("\n\nBai 26: Dem chu so le cua so nguyen duong n");
	printf("\nCac chu so le cua n la: %d", bai26(n));


	printf("\n\nBai 27: Tinh tong cac so chan cua n:");
	printf("\nS= %d", bai27(n));


	printf("\n\nBai 28: Tinh tich cac so le cua so nguyen duong n");
	printf("\nT= %d", bai28(n));

	printf("\n\nBai 29: Tim Chu so dau tien cua so nguyen duong n");
	printf("\nChu so dau tien la: %d", bai29(n));

	printf("\n\nBai 30: Dao nguoc so nguyen n\n");
	bai30(n);

	printf("\n\nBai 31:Tim chu so lon nhat cua so nguyen duong n");
	printf("\nGia tri lon nhat cua so nguyen duong n la: %d", bai31(n, max));

	printf("\n\nBai 32: Kiem tra so nguyen duong n co toan chu so le khong");
	if(bai32(n)== 0) printf("\nKhong toan so le");
	else printf("\nToan so le");

	printf("\n\nBai 33: Tim UCLN cua hai so nguyen duong");
	printf("\nGia tri lon nhat cua %d va %d la %d", a, b, bai33(a, b));

	printf("\n\nBai 34: Phan tu o dong a va cot b la: ");
	printf("\nPhan tu do la: %d", bai34(a, b));

	printf("\n\nBai 35: Tinh gia tri C(n, k)= k!/ (n!- (n-k)!)");
	printf("\ngia tri C(n, k)= %ld", bai35(n, x));//gia tri k thay bang gia tri x nhap vao tu ban phim

	printf("\n\nBai 36: Doi mot so o he thap phan sang he co so khac\nDoi sang he co so 2\n");
	bai36(n);


	printf("\n\n***************************CAC BAI TOAN VE MANG *****************************");

	int c[MAX];
	

	printf("\n\nNhap Mang cho truoc co %d phan tu: \n", n);
	nhapMang(c, n);

	printf("\n\nBai 37: Xuat Mang: ");
	bai37(c, n);

	printf("\n\nBai 38: tong mang co gia tri: ");
	printf("\nS= %d", bai38(c, n));

	printf("\n\nBai 39: So nho nhat trong mang la: ");
	printf("\nMin= %d", bai39(c, n));

	printf("\n\nBai 40: kiem tra mang a co phai toan so duong: ");
	if(bai40(c, n)== 1) printf("\n\tMang toan so duong");
	else printf("\n\tmang co phan tu am");

	getch();
	return 0;
}