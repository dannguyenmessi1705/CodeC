#include <stdio.h>
#include <math.h>
 
int UCLN(int a, int b)
{
    a = abs(a);
    b = abs(b);
    while (a * b != 0)
    {
        if (a > b)
            a %= b;
        else
            b %= a;
    }
    return a + b;
}
 
int BSCNN(int a, int b)
{
    return a * b / UCLN(a, b);
}
 
typedef struct PhanSo
{
    int tuso, mauso;
} PS;
 
PS rutGon(PS a)
{
    PS c;
    c.tuso = a.tuso / UCLN(a.tuso, a.mauso);
    c.mauso = a.mauso / UCLN(a.tuso, a.mauso);
    return c;
}
 
PS cong(PS a, PS b)
{
    PS c;
    c.tuso = a.tuso * b.mauso + a.mauso * b.tuso;
    c.mauso = a.mauso * b.mauso;
    c = rutGon(c);
    return c;
}
 
PS chia(PS a, PS b)
{
    PS c;
    c.tuso = a.tuso * b.mauso;
    c.mauso = a.mauso * b.tuso;
    c = rutGon(c);
    return c;
}
void print(PS a)
{
    printf("%d/%d", a.tuso, a.mauso);
}
void QuyDong(PS a,PS b){
	PS c1,c2;
	int BCNN=BSCNN(a.mauso,b.mauso);
	c1.tuso=a.tuso*(BCNN/(float)a.mauso);
	c2.tuso=b.tuso*(BCNN/(float)b.mauso);
	c1.mauso=BCNN;c2.mauso=BCNN;
	PS g=rutGon(c1);
	PS h=rutGon(c2);
	print(c1);
	printf(" ");
	print(c2);
}
int main()
{
    int t;
    scanf("%d",&t);
    for(int k=1;k<=t;k++){
    	PS a,b,c;
    	scanf("%d %d %d %d",(&a.tuso),(&a.mauso),(&b.tuso),(&b.mauso));
    	printf("Case #%d:\n",k);
    	a = rutGon(a);
    	b = rutGon(b);
    	QuyDong(a,b);
    	printf("\n");
    	c = cong(a, b);
    	print(c);
    	printf("\n");
    	c = chia(a, b);
    	print(c);
    	printf("\n");
	}
}