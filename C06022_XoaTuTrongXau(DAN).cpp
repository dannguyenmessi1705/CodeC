#include <stdio.h>
#include <string.h>
int main(){
    int t;
    char s1[200], s2[20], tmp1[200], tmp2[20], a1[200][200], a2[200][200];
    scanf("%d\n", &t);
    for(int k=1;k<=t;k++){
        scanf("%[^\n]%*c", s1);
        scanf("%[^\n]%*c", s2);
        int pos1=0, pos2=0, pos3=0, pos4=0;
        strcpy(tmp1,s1);
        strcpy(tmp2,s2);
        int len1=strlen(tmp1);
        int len2=strlen(tmp2);
        for(int i=0;s1[i]!=NULL;i++){
            if(s1[i]==32){
                a1[pos1][pos2]=0;
                pos1++; pos2=0;
            }
            else{
                a1[pos1][pos2]=s1[i];
                pos2++;
            }
        }
        a1[pos1][pos2]=0;
        for(int i=0;i<len1;i++){
            if(tmp1[i]>='A' && tmp1[i]<='Z')
                tmp1[i]+=32;
        }
        for(int i=0;i<len2;i++){
            if(tmp2[i]>='A' && tmp2[i]<='Z')
                tmp2[i]+=32;
        }
        for(int i=0;tmp1[i]!=NULL;i++){
            if(tmp1[i]==32){
                a2[pos3][pos4]=0;
                pos3++; pos4=0;
            }
            else{
                a2[pos3][pos4]=tmp1[i];
                pos4++;
            }
        }
        a2[pos3][pos4]=0;
        for(int i=0;i<=pos3;i++){
            if(strcmp(tmp2, a2[i])==0) a1[i][0]=0;
        }
        printf("Test %d: ", k);
        for(int i=0;i<=pos3;i++){
            if(a1[i][0]!=0) printf("%s ", a1[i]);
        }
        printf("\n");
}
}