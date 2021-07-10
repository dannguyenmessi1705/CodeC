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
	int U[10005];
	int m = 1;
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
		U[m]=i;
		m++ ;
	}
	int h=1;
	for(int i=1;i<m;i++){
		for(int j=i+1;j<m;j++){
			if(b[i]<b[j]){
				double tg=b[i];
				b[i]=b[j];
				b[j]=tg;
			}
		}
	}
	int v=0;
	while(h<=n){
		for(int i=1;i<=n;i++){
			double u = ten[i].d1 + ten[i].d2 + ten[i].d3 ;
			if(u==b[h]){
				for(int g=1;g<m;g++){
					if(U[g]==i){
						U[g]=0;
						v=1;
						break;
					}
				}
				if(v==1){
					printf("%d ",ten[i].stt);
				for(int l=0;l<strlen(ten[i].name);l++){
					printf("%c",ten[i].name[l]);
				}
				printf(" ");
				for(int l=0;l<strlen(ten[i].namsinh);l++){
					printf("%c",ten[i].namsinh[l]);
				}
				printf(" %.1lf\n",b[h]);
				v=0;
				}
			}
		}
		h++;
	}
	return 0 ;
}