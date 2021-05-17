#include <stdio.h>
int numToRepeatMax(int* a , int n, int k)
{
    int mx = a[0], result = 0;
	for (int i = 0; i< n; i++)
        a[a[i]%k] += k;

    for (int i = 1; i < n; i++)
    {
        if (a[i] > mx)
        {
            mx = a[i];
            result = i;
        }
    }
    return result;
}

int main()
{
    int a[100], n;
    scanf("%d", &n);
    for(int i=0;i<n;i++){
        scanf("%d", &a[i]);
    }
	int i;
 //------------- print original array ------------------	
	printf("The given array is:  \n");
	for(i = 0; i < n; i++)
		{
			printf("%d  ", a[i]);
		}
	printf("\n");
//------------------------------------------------------ 	
    int k=8;
    printf("The maximum repeating number is: %d", numToRepeatMax(a, n, k));
    return 0;
}