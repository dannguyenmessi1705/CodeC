#include <stdio.h>
#include <string.h>
int main(){
    char HoTen[80], Ho[80], Ten[80];
    int n;
    scanf("%d\n", &n);
    while(n--){
        gets(HoTen);
        int len1=strlen(HoTen), e=0, kt=0, k=0;
        for(int i=0;i<len1;i++){
            if(HoTen[i]>=65 && HoTen[i]<=122){
                k++;
                if(k==1) 
                    if(HoTen[i]>='A' && HoTen[i]<='Z')
                        Ho[e]=HoTen[0];
                    else Ho[e]=HoTen[i]-32;
                else{
                    if(HoTen[i]>='A' && HoTen[i]<='Z')
                        Ho[e]=HoTen[i]+32;
                    else Ho[e]=HoTen[i];
                }
                e++;
            }
            else kt++;
            if((HoTen[i]>=65 && HoTen[i]<=122) && (HoTen[i+1]<65 || HoTen[i+1]>122)){ 
                Ho[e]='\0';
                e=0;
                break;
            }
        }
        int len2=strlen(Ho), check=0;
        for(int i=kt+len2;i<len1;i++){
            if(HoTen[i]>=65 && HoTen[i]<=122) check++;
            if(check>0){
                if(check==1){
                    if(HoTen[i]>90) Ten[e]=HoTen[i]-32;
                    else Ten[e]=HoTen[i];
                }
                else{ 
                    if(HoTen[i]<=90 && HoTen[i]!=32) Ten[e]=HoTen[i]+32;
                    else Ten[e]=HoTen[i];
                }
                e++;
                if(HoTen[i]<65 || HoTen[i]>122) check=0;
        }
    }
        Ten[e]='\0';
        printf("%s %s\n", Ho, Ten);
    }
}