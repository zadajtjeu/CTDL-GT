#	TỔNG HỢP 40 BÀI TOÁN ĐỆ QUY VIẾT BẰNG C++

##CÁC BÀI TOÁN TÍNH TỔNG BẰNG PHƯƠNG PHÁP ĐỆ QUY
###Bài 01: Tính tổng s= 1+ 2+ 3+.....+n
```cpp
int bai01(int n)
{
	if( n<= 1)
		return 1;
	else 
		return bai01(n- 1)+ n;
}
```
###Bài 02: Tính tổng: S(n)= 1^2+ 2^2+ 3^2+...+ n^2
```cpp
int bai02(int n)
{
	if(n==1)
		return 1;
	else 
		return bai02(n-1)+ n*n;
}
```
###Bài 03: Tính tổng: S(n)= 1+ 1/2+ 1/3+...+ 1/n
```cpp
float bai03(int n)
{
	if(n==1)
		return 1;
	else
		return bai03( n-1)+ (float)1/n;
}
```
###Bài 04: Tính tổng S(n)= 1/2+ 1/4+ 1/6+..+1/(2*n)
```cpp
float bai04(int n)
{
	if(n==1)
		return 1/2;
	else
		return bai04(n-1) + (float) 1/(2*n);
}
```
###Bài 05: Tính tổng S(n)= 1+ 1/3+ 1/5+...+1/(2n+1)
```cpp
float bai05(int n)
{
	if(n==0)
		return 1;
	else
		return bai05(n-1) +(float) 1/(2*n+1);
}
```
###Bài 06: Tính tổng S(n)= 1/1*2+ 1/2*3+ 1/3*4+ ...+ 1/(n* (n+1))
```cpp
float bai06(int n)
{
	if(n==1)
		return 1/2;
	else
		return bai06(n-1) +(float) 1/(n*(n+1));
}
```
###Bài 07: Tính tổng S(n)= 1/2+ 2/3+ 3/4+...+n/n+1
```cpp
float bai07(int n)
{
	if(n==1)
		return 1/2;
	else 
		return bai07(n-1) +(float) n/(n+1);
}
```
###Bài 08: Tính tổng S(n)= 1/2+ 3/4+ 5/6+...+2n+1/2n+2
```cpp
float bai08(int n)
{
	if(n==0)
		return 1/2;
	else 
		return bai08(n-1) + ((float)(2*n+1)/(2*n+2));
}
```
###Bài 09: Tính T= 1*2*3*...*n
```cpp
int bai09(int n)
{
	if(n==1)
		return 1;
	else 
		return bai09(n-1) * n;
}
```
###Bài 10: Tính T= x^n
```cpp
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
```
###Bài 11: Tính S= 1+ 1.2+ 1.2.3+...+ 1.2.3....n
```cpp
long bai11(int n)
{	
	if(n==1)
		return 1;
	else 
		return bai11(n-1) +	bai09(n- 1)* n;
	//bai09 la ham tinh giai thua da tinh o tren
}
```
###Bài 12: Tính S= x+ x^2+ x^3+...x^n
```cpp
int bai12(int x, int n)
{
	if(n==1)
		return x;
	else 
		return bai12(x, n-1) + pow((float)x,n);
}
```
###Bài 13: Tính tổng S= x^2+ x^4+ x^6+...+ x^2n
```cpp
int bai13(int x, int n)
{
	if(n==1)
		return x;
	else 
		return bai13(x, n-1) + pow((float)x,2*n);
}
```
###Bài 14: Tính tổng S(x,n)= x^1+ x^3+ x^5+...+x^(2n+1)
```cpp
int bai14(int x, int n)
{
	if(n==1)
		return x;
	else 
		return bai14(x, n-1) + pow((float)x,(2*n+1));
}

```
###Bài 15: Tính tổng S(n)= 1+ 1/(1+2)+ 1/(1+2+3)+...+ 1/(1+2+3+...+n)
```cpp
float bai15(int n)
{
	if(n==1)
		return 1;
	else
		return bai15(n-1) + (float)1/ bai01(n-1);
}
```
###Bài 16: Tính tổng S(n)= x+ x^2/2!+ x^3/3!+...x^n/n!
```cpp
float bai16(int x, int n)
{
	if(n==1)
		return x;

	else 
		return bai16(x, n-1)+ ((bai10(x, n-1)* pow((float)x, n))/(bai09(n-1)*n));
}
```
###Bài 17: Tính tổng S(n)= 1+ x^2/2!+ x^4/4!+...+ x^(2n)/(2n)!
```cpp
float bai17(int x, int n)
{
	if(n==1)
		return (x*x)/2;
	else
		return bai17(x, n-1) +( (bai10(x, n-1)* pow((float)x, n))/ (bai09(n-1)* 2*n));
}
```
###Bài 18: Tính S(n)= sqrt(2+ sqr(2+ sqrt(2+ ...+sqrt(2))) có n dấu căn
```cpp
float bai18(int n)
{
	if(n == 1)
		return sqrt(2.0);
	else
		return sqrt(2 + bai18(n - 1));
}
```
###Bài 19: Tính tổng S(n)= sqrt(n+ sqrt(n- 1)+ sqrt(n-1+...+ sqrt(1))) có n dấu căn
```cpp
float bai19(int n)
{
	if(n == 1)
		return 1;
	return sqrt((n-1) + bai19(n-1)); 
}
```
###Bài 20: Tin tong S(n)= sqrt(1+ sqrt(2+ sqrt(3+...+sqrt(n))))
```cpp
float bai20(int n)
{
	if(n== 1)
		return 1;
	else 
		return sqrt(bai20(n- 1)+ sqrt((float)n));
}
```
###Bài 21: Tính tổng S(n)= 1+ 1/ 1+ 1/ 1+ 1/ 1+...1/ 1+1 có n dấu chia
```cpp
float bai21(int n)
{
	if(n == 0)
		return 1;
	else 
		return 1.0 / (1 + bai21(n - 1));
}
```
## ĐỆ QUY KIỂM TRA TÍNH TOÁN
###Bài 22: Tìm ước số lẻ lớn nhất của n
```cpp
int bai22(int n)
{
	if(n % 2 != 0)
	{
		return n;
	}

	return bai22(n / 2);
}

```
###Bài 23: Đếm số các chữ số của số nguyên dương n
```cpp
int bai23(int n)
{
	
	if(n < 10)
	{
		return 1;
	}

	return bai23(n / 10) + 1;
}
```
###Bài 24: Tính tổng các chữ số của số nguyên dương n
```cpp
int bai24(int n)
{
	if(n == 0)
	{
		return 0;
	}

	return bai24(n / 10) + n % 10;
}
```
###Bài 25: Tính tích các chữ số của số nguyên dương n
```cpp
int bai25(int n)
{
	if(n == 0)
	{
		return 1;
	}

	return bai25(n /10) * (n % 10);
}
```
###Bài 26: Đếm các chữ số lẻ của số nguyên dương n
```cpp
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
```
###Bài 27:Tính tổng các số chẵn của số nguyên dương n
```cpp
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
```
###Bài 28: Tính tích các số lẻ của số n
```cpp
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
```
###Bài 29: Tìm chữ số đứng đầu tiên của số nguyên dương n
```cpp
int bai29(int n)
{
	if(n< 10)
		return n;
	else
		return bai29(n/10);
}

```
###Bài 30: Đảo ngược các chữ số của số nguyên n
```cpp
void bai30(int n)
{
	if(n==0)
		return;
	printf("%d",n%10);
	bai30(n/10); 
}
```
###Bài 31: Tìm chữ số lớn nhất của số nguyên dương n
```cpp
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
```
###Bài 32: Kiểm tra số nguyên dương n có gồm toàn chữ số lẻ hay không
```cpp
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
```
###Bài 33: Tìm UCLN của hai số nguyên dương
```cpp
int UCLN(int a, int b)
{
	if(b==0)
		return a;
	return UCLN(b,a% b);
}
```
###Bài 34: Tính giá trị phần tử tại dòng d và cột c của tam giác Pascal
```cpp
int bai34(int a, int b)
{
	if(a== 1)
		return 1;
	if(a> 1){
		return bai34((a- 1), 2*b- 1)+ a; 
	}
		
}
```
###Bài 35: Tính giá trị C(n, k)= k!/ (n!- (n-k)!) biết:
* C(n, k)= 1 nếu k= 0 hoặc k= n
* C(n. k)= 0 nếu k> n
* C(n, k)= C(n- 1, k)+ C(n- 1, k- 1) nếu 0< k< n
```cpp
long bai35(int n,int k)
{
	if(k==0)
		return 1;
	if(k==n)
		return 0;
	return bai35(n-1,k) + bai35(n-1,k-1);
}
```
###Bài 36: Đổi một số ở hệ thập phân sang hệ cơ số khác
```cpp
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
```
## CÁC BÀI TOÁN ĐỆ QUY TRÊN MẢNG
### Nhập mảng
```cpp
void nhapMang(int a[], int n)
{

	if(n> 0){
		nhapMang(a, n- 1);
		printf("Nhap phan tu %d: ", n);
		scanf("%d", &a[n]);
	}
}
```
###Bài 37: Xuất mảng bằng đệ quy
```cpp
void bai37(int a[], int n)
{
	if(n> 0){
		bai37(a, n- 1);
		printf("%d ", a[n]);
	}
}
```
###Bài 38: Tính tổng các phần tử trong mảng bằng đệ quy
```cpp
int bai38(int a[], int n)
{

	if(n== 0) return 0;
	else 
		return a[n]+ bai38(a, n- 1);
}
```
###Bài 39: Tìm số nhỏ nhất trong mảng bằng đệ quy
```cpp
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
```
###Bài 40: Kiểm tra mảng có phải toàn số dương hay không bằng đệ quy
```cpp
int bai40(int a[], int n)
{
	if(n== 1) return 1;
	if(a[n- 1]< 0) return 0;
		n--;
	return bai40(a, n);
}
```