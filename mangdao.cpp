#include "stdio.h"
void NhapMang(int a[100], int n)
{
   for(int i = 0; i<n; i++)
   {
      scanf("%d",&a[i]);
   }
}

void DaoMang(int a[],int n)
{
   for(int i=0;i<n/2;i++)
    {
      int temp=a[i];
         a[i]=a[n-1-i];
         a[n-1-i]=temp; 
   }
}
void XuatMang(int a[100], int n)
{
   for(int i = 0; i<n; i++)
   {
      printf("%d ",a[i]);
   }
}
int main()
{
   int a[100],n;
   scanf("%d",&n);
   NhapMang(a,n);
   DaoMang(a,n);
   XuatMang(a,n);
}