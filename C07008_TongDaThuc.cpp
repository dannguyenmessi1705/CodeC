#include<stdio.h>
#include<string.h>
struct TEN {
	int dodai,dodai2;
	int heso[1000];
	int mu[1000];
	int mu2[1000];
	int so[1000];
};
int main(){
	struct TEN ten[100];
	int t;
	scanf("%d",&t);
	while(t--){
		for(int z=1;z<=2;z++){
			scanf("\n");
			char s1[1003];
			gets(s1);
			int l1=0;
			char x[2]=" ";
			char *p;
			p=strtok(s1,x);
			while(p!=NULL){
				if(strcmp(p,"+")>0){
					int f=strlen(p);
					int m=0,r=1,a,b=1;
					for(int i=0;i<f;i++){
						if(p[i]>=48&&p[i]<=57){
							++m;
						}
						else{
							break;
						}
					}
					int e=m-1;
					while(e--){
						r*=10;
					}
					ten[z].heso[l1]=0;
					for(int i=0;i<m;i++){
						ten[z].heso[l1]+=((int)p[i]-48)*r;
						r=r/10;
					}
					a=f-m-4;
					while(a--){
						b*=10;
					}
					ten[z].mu[l1]=0;
					for(int i=m+3;i<f;i++){
						ten[z].mu[l1]+=((int)p[i]-48)*b;
						b=b/10;
					}
					l1++;
				}
				p=strtok(NULL,x);
			}
			ten[z].dodai=l1;
		}
		int l3=0;
		for(int i=0;i<ten[1].dodai;i++){
			int v=0;
			for(int j=0;j<ten[2].dodai;j++){
				if(ten[1].mu[i]==ten[2].mu[j]){
					ten[0].so[l3]=ten[1].heso[i]+ten[2].heso[j];
					ten[1].heso[i]=0;
					ten[2].heso[j]=0;
				}
				v++;
			}
			if(ten[1].heso[i]==0){
				ten[0].mu2[l3]=ten[1].mu[i];
				l3++;
			}
		}
		for(int i=0;i<ten[1].dodai;i++){
			if(ten[1].heso[i]!=0){
				ten[0].so[l3]=ten[1].heso[i];
				ten[0].mu2[l3]=ten[1].mu[i];
				l3++;
			}
		}
		for(int i=0;i<ten[2].dodai;i++){
			if(ten[2].heso[i]!=0){
				ten[0].so[l3]=ten[2].heso[i];
				ten[0].mu2[l3]=ten[2].mu[i];
				l3++;
			}
		}
		for(int i=0;i<l3-1;i++){
			for(int j=i+1;j<l3;j++){
				if(ten[0].mu2[i]<ten[0].mu2[j]){
					int mu4=ten[0].mu2[j];
					int so1=ten[0].so[j];
					ten[0].so[j]=ten[0].so[i];
					ten[0].mu2[j]=ten[0].mu2[i];
					ten[0].so[i]=so1;
					ten[0].mu2[i]=mu4;
				}
			}
		}
		for(int i=0;i<l3;i++){
			if(i<l3-1){
				printf("%d*x^%d + ",ten[0].so[i],ten[0].mu2[i]);
			}else{
				printf("%d*x^%d\n",ten[0].so[i],ten[0].mu2[i]);
			}
		}
	}
}