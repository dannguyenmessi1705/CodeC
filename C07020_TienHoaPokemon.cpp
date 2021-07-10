#include<stdio.h>
#include<string.h>
struct pokemon{
    char name[1000];
	int da;
	int soluong;
};
int main(){
	struct pokemon ten1[100];
	int n,A[10005],B[10005],C[10005];
	scanf("%d",&n);
	int m=1;
	for(int i=1;i<=n;i++){
		scanf("\n");
		gets(ten1[i].name);
		scanf("%d %d",&ten1[i].da,&ten1[i].soluong);
		A[m]=ten1[i].da;
		B[m]=ten1[i].soluong;
		m++ ;
	}
	int sum = 0 ;
	for(int i=1;i<=n;i++){
		int dem = 0 ;
		while ( B[i] >=  A[i] ) {
			B[i] = B[i] - A[i] + 2;
			dem++;
			sum++;
		}
		C[i] = dem ; 
	}
	int max = -1000 ;
	for ( int i = 1 ; i <= n ; i++ ){
		if ( max < C[i] ){
			max = C[i] ;
		}
	}
	printf("%d\n", sum ) ;
	for ( int i = 1 ; i <= n ; i++ ){
		if ( C[i] == max ){
			for ( int j = 0 ; j < strlen(ten1[i].name ); j++ ) {
				printf("%c", ten1[i].name[j] ) ;
			}
			break ;	
		}
	}
}