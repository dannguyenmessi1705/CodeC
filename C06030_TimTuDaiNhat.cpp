#include<stdio.h>
#include<string.h>
int main(){
	char s[1001];
	char a[1001][1001],b[1001][1001];
	int d[1001];
	int l1=0,l3=0;
	while(scanf("%s",&s)!=-1){
	strcpy(a[l1],s);
	l1++;
	}
	int max=-1000;
	for(int i=0;i<l1;i++){
		int x=strlen(a[i]);
		if(max<x) max=x;
	}
	for(int i=0;i<l1;i++){
		int k=strlen(a[i]);
		if(k==max){
			d[l3]=1;
			strcpy(b[l3],a[i]);
			l3++;
		}
	}
	char x[2]="+";
	for(int i=0;i<l3;i++){
		for(int j=i+1;j<l3;j++){
			if(strcmp(b[i],b[j])==0){
				strcpy(b[j],x);
				d[i]++;
			}
		}
	}
	for(int i=0;i<l3;i++){
		if(strcmp(b[i],x)>0){
			printf("%s %d %d\n",b[i],max,d[i]);
		}
	}
}