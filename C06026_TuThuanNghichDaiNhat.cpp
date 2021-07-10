#include<stdio.h>
#include<stdbool.h>
#include<string.h>
char a[1000][30];
char s[1000][30];
int main(){
	int size = 0;
	int sizeMax = 0;
	char t[30];
	while( scanf("%s",&t) != -1 ){
		int k=strlen(t),pos3=0,pos4=k-1,ok=1;
		while(pos3<pos4){
			if(t[pos3]==t[pos4]){
				pos3++;pos4--;
			}
			else{
				ok=0;
				break;
			}
		}
		if(ok==0) continue;
		else{
			if( sizeMax < strlen(t) ) sizeMax = strlen(t);
			strcpy(a[size],t);
			size++;
		}
	}
	int n = size;
	size = 0;
	for(int i = 0 ; i < n ; i++ ){
		if( strlen(a[i]) == sizeMax){
			strcpy(s[size],a[i]);
			size++;
		}
	}
	n = size;
	for(int i = 0 ; i < n ; i++ ){
		bool ok = false;
		for(int j = 0 ; j < i ; j++ ){
			if( strcmp(s[i],s[j]) == 0 ){
				ok = true;
				break;
			}
		}
		if( ok == true ) continue;
		else{
			int dem = 1;
			for( int j = i+1 ; j < n ; j++ ){
				if( strcmp(s[i],s[j]) == 0  ) dem++;
			}
			printf("%s %d\n",s[i],dem);
		}
	}
}