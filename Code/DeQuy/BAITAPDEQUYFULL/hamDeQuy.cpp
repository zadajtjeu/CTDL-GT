#include "libDeQuy.h"

/***************CAC BAI TOAN TINH TONG BANG PP DE QUY*******************************/
//Bai 1: tinh tong s= 1+ 2+ 3+.....+n

int bai01(int n)
{
	if( n<= 1)
		return 1;
	else 
		return bai01(n- 1)+ n;
}
/***********************************/
//Bai 02: Tinh tong: S(n)= 1^2+ 2^2+ 3^2+...+ n^2

int bai02(int n)
{
	if(n==1)
		return 1;
	else 
		return bai02(n-1)+ n*n;
}
/***********************************/
//Bai 03: tinh tong S(n)= 1+ 1/2+ 1/3+...+ 1/n

float bai03(int n)
{
	if(n==1)
		return 1;
	else
		return bai03( n-1)+ (float)1/n;
}
/***********************************/
//Bai 04: Tinh tong S(n)= 1/2+ 1/4+ 1/6+..+1/(2*n)

float bai04(int n)
{
	if(n==1)
		return 1/2;
	else
		return bai04(n-1) + (float) 1/(2*n);
}
/***********************************/
//Bai 05: Tinh tong S(n)= 1+ 1/3+ 1/5+...+1/(2n+1)

float bai05(int n)
{
	if(n==0)
		return 1;
	else
		return bai05(n-1) +(float) 1/(2*n+1);
}
/***********************************/
//Bai 06: tinh tong S(n)= 1/1*2+ 1/2*3+ 1/3*4+ ...+ 1/(n* (n+1))

float bai06(int n)
{
	if(n==1)
		return 1/2;
	else
		return bai06(n-1) +(float) 1/(n*(n+1));
}
/***********************************/
//Bai 07: Tinh Tong S(n)= 1/2+ 2/3+ 3/4+...+n/n+1
float bai07(int n)
{
	if(n==1)
		return 1/2;
	else 
		return bai07(n-1) +(float) n/(n+1);
}
/***********************************/
//Bai 08: Tinh Tong S(n)= 1/2+ 3/4+ 5/6+...+2n+1/2n+2

float bai08(int n)
{
	if(n==0)
		return 1/2;
	else 
		return bai08(n-1) + ((float)(2*n+1)/(2*n+2));
}
/***********************************/
//Bai 09: Tinh T= 1*2*3*...*n

int bai09(int n)
{
	if(n==1)
		return 1;
	else 
		return bai09(n-1) * n;
}
/***********************************/
//Bai 10: Tinh T= x^n

int bai10(int x, int n)
{
	if(n == 1)
		return x;

	if(n == -1)
		return 1.0 / x;

	if(n < 0)
		return bai10(x, n-1) * 1.0 / x;

	else if(n == 0)
		return 1;

	return bai10(x, n-1) * pow((float)x, n);
}
/***********************************/
//Bai 11: Tinh S= 1+ 1.2+ 1.2.3+...+ 1.2.3....n

long bai11(int n)
{	
	if(n==1)
		return 1;
	else 
		return bai11(n-1) +	bai09(n- 1)* n;
	//bai09 la ham tinh giai thua da tinh o tren
}
/***********************************/
//Bai 12: Tinh S= x+ x^2+ x^3+...x^n

int bai12(int x, int n)
{
	if(n==1)
		return x;
	else 
		return bai12(x, n-1) + pow((float)x,n);
}
/***********************************/
//Bai 13: Tinh tong S= x^2+ x^4+ x^6+...+ x^2n

int bai13(int x, int n)
{
	if(n==1)
		return x;
	else 
		return bai13(x, n-1) + pow((float)x,2*n);
}
/***********************************/
//Bai 14: Tinh tong S(x,n)= x^1+ x^3+ x^5+...+x^(2n+1)

int bai14(int x, int n)
{
	if(n==1)
		return x;
	else 
		return bai14(x, n-1) + pow((float)x,(2*n+1));
}

/***********************************/
//Bai 15: Tinh tong S(n)= 1+ 1/(1+2)+ 1/(1+2+3)+...+ 1/(1+2+3+...+n)

float bai15(int n)
{
	if(n==1)
		return 1;
	else
		return bai15(n-1) + (float)1/ bai01(n-1);
}
/***********************************/
//Bai 16: Tinh tong S(n)= x+ x^2/2!+ x^3/3!+...x^n/n!

float bai16(int x, int n)
{
	if(n==1)
		return x;

	else 
		return bai16(x, n-1)+ ((bai10(x, n-1)* pow((float)x, n))/(bai09(n-1)*n));
}
/*******************************/
//Bai 17: Tinh Tong S(n)= 1+ x^2/2!+ x^4/4!+...+ x^(2n)/(2n)!

float bai17(int x, int n)
{
	if(n==1)
		return (x*x)/2;
	else
		return bai17(x, n-1) +( (bai10(x, n-1)* pow((float)x, n))/ (bai09(n-1)* 2*n));
}
/*******************************/
//Bai 18: Tinh S(n)= sqrt(2+ sqr(2+ sqrt(2+ ...+sqrt(2))) co n dau can

float bai18(int n)
{
	if(n == 1)
		return sqrt(2.0);
	else
		return sqrt(2 + bai18(n - 1));
}
/*******************************/
//Bai 19: Tinh Tong S(n)= sqrt(n+ sqrt(n- 1)+ sqrt(n-1+...+ sqrt(1))) co n dau can

float bai19(int n)
{
	if(n == 1)
		return 1;
	return sqrt((n-1) + bai19(n-1)); 
}
/*******************************/
//Bai 20: Tin tong S(n)= sqrt(1+ sqrt(2+ sqrt(3+...+sqrt(n))))

float bai20(int n)
{
	if(n== 1)
		return 1;
	else 
		return sqrt(bai20(n- 1)+ sqrt((float)n));
}
/*******************************/
//Bai 21: Tinh Tong S(n)= 1+ 1/ 1+ 1/ 1+ 1/ 1+...1/ 1+1 co n dau chia

float bai21(int n)
{
	if(n == 0)
		return 1;
	else 
		return 1.0 / (1 + bai21(n - 1));
}
/*************************kiem tra- tinh toan************************************/
//Bai 22: tim uoc so le lon nhat cua n
int bai22(int n)
{
	if(n % 2 != 0)
	{
		return n;
	}

	return bai22(n / 2);
}

/***********************************************/
//Bai 23: Dem so luong chu so cua so nguyen duong n
int bai23(int n)
{
	
	if(n < 10)
	{
		return 1;
	}

	return bai23(n / 10) + 1;
}
/***********************************************/
//Bai 24: tinh tong cac chu so cua so nguyen duong n
int bai24(int n)
{
	if(n == 0)
	{
		return 0;
	}

	return bai24(n / 10) + n % 10;
}
/***********************************************/
//Bai 25: Tinh tich cac chu so cua so nguyen duong n
int bai25(int n)
{
	if(n == 0)
	{
		return 1;
	}

	return bai25(n /10) * (n % 10);
}
/***********************************************/
//Bai 26: dem cac chu so le cua so nguyen duong n
int bai26(int n)
{
	if(n == 0)
	{
		return 0;
	}
	
	if(n % 2 != 0)
	{
		return bai26(n / 10) + 1;
	}
	return bai26(n / 10);
}
/***********************************************/
//Bai 27:Tinh tong cac so chan cua n
int bai27(int n)
{
	if(n == 0)
	{
		return 0;
	}
	if(n % 2 == 0)
	{
		return bai27(n / 10) + n % 10;
	}

	return bai27(n / 10);
}
/***********************************************/
//Bai 28: Tinh tich cac so le cua so nguyen duong n
int bai28(int n)
{
	if(n == 0)
	{
		return 1;
	}
	if(n % 2 == 1)
	{
		return bai28(n / 10) * (n % 10);
	}
	return bai28(n / 10);
}
/***********************************************/
//Bai 29: Tim chu so dau tien cua so nguyen duong n
int bai29(int n)
{
	if(n< 10)
		return n;
	else
		return bai29(n/10);
}

/***********************************************/
//Bai 30: Dao nguoc so nguyen n
void bai30(int n)
{
	if(n==0)
		return;
	printf("%d",n%10);
	bai30(n/10); 
}
/*******************************/
// Bai 31:Tim chu so lon nhat cua so nguyen duong n

int bai31(int n, int max= 0)
{    
	int i= 0;
    if(n==0)
         return max;
    else
    {
        i=n%10;
        if(i>max)
             max=i;
    }     
    return bai31(n/10,max);
}
/*******************************/
//Bai 32: Kiem tra so nguyen duong n co toan chu so le khong

int bai32(int n)
{
	int i= 0;
	if(n== 0)
		return 0;//khong toan so chan
	i= n/10;
	if(n%2== 0 && n!= 0)
		return 0;//khong toan so chan
	else
		return 1;//toan so chan
}
/*******************************/
//Bai 33: Tim UCLN cua hai so nguyen duong

int bai33(int a, int b)
{
	if(b==0)
		return a;
	return bai33(b,a% b);
}
/*******************************/
//Bai 34: Tinh gia tri	phan tu tai dong d va cot c cua tam gia pascal
int bai34(int a, int b)
{
	if(a== 1)
		return 1;
	if(a> 1){
		return bai34((a- 1), 2*b- 1)+ a; 
	}
		
}
/*******************************/
//Bai 35: Tinh gia tri C(n, k)= k!/ (n!- (n-k)!) biet:
//C(n, k)= 1 neu k= 0 hoac k= n
//C(n. k)= 0 neu k> n
//C(n, k)= C(n- 1, k)+ C(n- 1, k- 1) neu 0< k< n

long bai35(int n,int k)
{
	if(k==0)
		return 1;
	if(k==n)
		return 0;
	return bai35(n-1,k) + bai35(n-1,k-1);
}
/*******************************/
//Bai 36: Doi mot so o he thap phan sang he co so khac

void bai36(int n)//doi sang he co so 2
{
	if(n<=0){
		printf("%d",n);
	}
	 else{
		bai36(n/2);
		printf("%d",n%2);
	}
}
/***************Cac bai toan tren mang************************************/
void nhapMang(int a[], int n)
{

	if(n> 0){
		nhapMang(a, n- 1);
		printf("Nhap phan tu %d: ", n);
		scanf("%d", &a[n]);
	}
}
/*******************************/
//Bai 37: xuat mang bang de quyt
void bai37(int a[], int n)
{
	if(n> 0){
		bai37(a, n- 1);
		printf("%d ", a[n]);
	}
}
/*******************************/
//Bai 38: Tinh tong cac phan tu trong mang
int bai38(int a[], int n)
{

	if(n== 0) return 0;
	else 
		return a[n]+ bai38(a, n- 1);
}

/************************************************/
//Bai 39: tim so nho nhat trong mang
int bai39(int a[], int n)
{
	if(n== 1)	
		return a[1];
	if(n> 1){
		int m= bai39(a, n- 1);
		if(a[n- 1]< m) 
			return a[n-1];
		else
			return m;
	}
	
}
/************************************************/
//Bai 40: kiem tra mang co phai toan so duong 
int bai40(int a[], int n)
{
	if(n== 1) return 1;
	if(a[n- 1]< 0) return 0;
		n--;
	return bai40(a, n);
}