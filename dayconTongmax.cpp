#include <stdio.h>
int tong(int a[], int left, int right)
{
    return left==right ? a[left] : a[left]+tong(a, left+1, right);
}
 
int main()
{
    int a[100], n;
    scanf("%d", &n);
    for (int i=0; i<n; ++i)
        scanf("%d", &a[i]);
   
    int max = a[0], max1;
    int imax = 0, jmax = 0;
   
    for (int i=0; i<n; ++i)
        for (int j=i; j<n; ++j)
        {
            if(i==0 && j==n-1)continue;
            max1 = tong(a, i, j);
            if(max1 > max) {max = max1; imax = i; jmax = j;}
        } 
        printf("%d", max);
    return 0;
}