#include<stdio.h>
#include<math.h>
int main(){
	int A[2501],C[400];
	for(int i=0;i<=2500;i++){
		A[i]=1;
	}
	A[0]=A[1]=0;
	for(int i=2;i<=sqrt(2500);i++){
		if(A[i]==1){
			for(int j=i*2;j<=2500;j+=i){
				A[j]=0;
			}
		}
	}
	int k=0;
	for(int i=2;i<=2500;i++){
		if(A[i]!=0){
			C[k]=i;
			++k;
		}
	}
	int y;
	scanf("%d",&y);
	for(int l=1;l<=y;l++){
		int i,j,sohang,socot,vthang,vtcot;
		int n;
		scanf("%d",&n);
		int a[n][n];
		int h=n*n;
		sohang=socot=n;
		vthang=vtcot=0;
		int t=0,z=0;
		while(t<=h+1){
		for(i=vtcot;i<socot;i++){
			a[vthang][i]=C[z];
			z++;
		}
		for(i=vthang+1;i<sohang;i++){
			a[i][socot-1]=C[z];
			z++;
		}
		for(i=socot-2;i>=vtcot;i--){
			a[sohang-1][i]=C[z];
			z++;
		}
		for(i=sohang-2;i>vthang;i--){
			a[i][vtcot]=C[z];
			z++;
		}
			vthang++;vtcot++;sohang--;socot--,t++;
		}
		printf("Test %d:\n",l);
		for(i=0;i<n;i++){
			for(j=0;j<n;j++){
				printf("%d ",a[i][j]);
			}
			printf("\n");
		}
	}
}