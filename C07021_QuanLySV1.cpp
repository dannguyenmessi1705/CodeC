#include<stdio.h>
#include<string.h>
struct qlsv {
	int stt;
	char name[100];
	double d1;
	double d2;
	double d3;
};
int main(){
	struct qlsv ten[100];
	double b[10005];
	int A[10005],B[10005],C[10005],U[10005];
	double D[10005];
	int t,m=0,n=0,r=0,k=0,z=1,c=0,t1=1,t2,q=1;
	do{
		scanf("%d",&t);
		C[r]=t;
		switch(t){
			case 1:{
				int h;
				scanf("%d",&h);
				B[n]=h;
				if(n==0){
					k=h;
				}else{
					for(int i=0;i<n;i++){
						if(B[i]>0){
							k+=B[i];
						}
					}
				}
				if(n>1){
					for(int i=1+k;i<=h+k;i++){
					ten[i].stt=i;
					scanf("\n");
					gets(ten[i].name);
					scanf("\n");
					scanf("%lf %lf %lf",&ten[i].d1,&ten[i].d2,&ten[i].d3);
					double s=ten[i].d1+ten[i].d2+ten[i].d3;
					D[z]=s;
					U[z]=i;
					z++;
					scanf("\n");
					}
				}else{
					for(int i=1;i<=h;i++){
					ten[i].stt=i;
					scanf("\n");
					gets(ten[i].name);
					scanf("\n");
					scanf("%lf %lf %lf",&ten[i].d1,&ten[i].d2,&ten[i].d3);
					double s=ten[i].d1+ten[i].d2+ten[i].d3;
					D[z]=s;
					U[z]=i;
					z++;
					scanf("\n");
					}
				}
				++n;
				break;
			}
			case 2:{
				int f;
				scanf("%d",&f);
				A[m]=f;
				scanf("\n");
				gets(ten[f].name);
				scanf("%lf %lf %lf",&ten[f].d1,&ten[f].d2,&ten[f].d3);
				double s=ten[f].d1+ten[f].d2+ten[f].d3;
				D[f]=s;
				++m;
				break;
			}
			case 3:{
				t2=r;
				printf("%d\n",k);
				for(int i=0;i<r-1;i++){
					for(int j=i+1;j<r;j++){
						if(C[j]==C[i]){
							for(int y=j+1;y<r;y++){
								C[y-1]=C[y];
							}
							--i;
							--r;
						}
					}
				}
				for(int i=0;i<r;i++){
					if(C[i]==2){
						for(int j=0;j<m;j++){
							printf("%d\n",A[j]);
						}
					}
				}
				for(int i=1;i<z;i++){
					for(int j=i+1;j<z;j++){
						if(D[i]>D[j]){
							double tg=D[i];
							D[i]=D[j];
							D[j]=tg;
						}
					}
				}
				int v=0;
				while(q<=k){
					for(int i=1;i<=k;i++){
						double u = ten[i].d1 + ten[i].d2 + ten[i].d3 ;
						if(u==D[q]){
							for(int j=1;j<=z;j++){
								if(U[j]==i){
									U[j]=0;
									v=1;
									break;
								}
							}
						}
						if(v==1){
							printf("%d ",ten[i].stt);
							for(int g=0;g<strlen(ten[i].name);g++){
								printf("%c",ten[i].name[g]);
							}
							printf(" ");
							printf("%.1lf %.1lf %.1lf\n",ten[i].d1,ten[i].d2,ten[i].d3);
							v=0;
						}
					}
					++q;
				}
				break;
			}
		}
		r++;
	}
	while(t!=3);
}