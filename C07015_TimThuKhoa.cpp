#include<stdio.h>
#include<string.h>


struct sp {
    int stt ;
	char name[100];
	char namsinh[100];
	double d1 ;
	double d2 ;
	double d3 ;
};


int main () {
	int n;
	struct sp ten[100] ;
	double b[10005] ;
	double c[10005] ;
	int x = 0 ;
	int m = 1 ;
	int kt = 1;
	scanf("%d", &n );
	for ( int i = 1 ; i <= n ; i++ ) {
		ten[i].stt = i ;
		scanf("\n");
		gets( ten[i].name );
		scanf("\n");
		gets( ten[i].namsinh );
		scanf("\n");
		scanf("%lf %lf %lf", &ten[i].d1, &ten[i].d2,&ten[i].d3);
		double s = ten[i].d1 + ten[i].d2 + ten[i].d3 ;
		b[m] = s ;
		m++ ;
	}
	double max=b[1];
	for(int i=2;i<=m;i++){
		if(max<b[i]) max=b[i];
	}
	for(int i=1;i<=n;i++){
		if(b[i]<max){
			ten[i].stt=0;
		}
	}
	for(int i=1;i<=n;i++){
		if(ten[i].stt!=0){
			printf("%d ",ten[i].stt);
			for(int l=0;l<strlen(ten[i].name);l++){
				printf("%c",ten[i].name[l]);
			}
			printf(" ");
			for(int l=0;l<strlen(ten[i].namsinh);l++){
				printf("%c",ten[i].namsinh[l]);
			}
			printf(" %.1lf\n",b[i]);
		}
	}
	return 0 ;
}