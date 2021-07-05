#include<stdio.h>
int main(){
	int n;
	scanf("%d",&n);
	int a[1000000];
	int i;
	for(i=0;i<n-1;i++){
		int x,y;
		scanf("%d%d",&x,&y);
		a[x]++;
		a[y]++;
	}
	for(i=1;i<=n;i++){
		if(a[i]==n-1){
			printf("Yes");
			return 0;
		}
	}
	printf("No\n");
}