#include<stdio.h>
#include<string.h>
void dao(char s[], int len){
    char s4[500] = {};
    for(int i = len - 1; i >= 0; i--){
        s4[len - 1 -i] = s[i];
    }
    strcpy(s, s4);
}
void xuly(int a, int b, char s1[], char s2[]){
    char s3[500] = {};
    s3[0] = 0;
    int p = 0;
    dao(s1, a);
    dao(s2, b);
    for(int i = 0; i < a; i++){
        if(s1[i] + s2[i] - 48 > 57){
            s3[p++] = s1[i] + s2[i] - 58;
            s2[i+1]++;
        }
        else    s3[p++] = s1[i] + s2[i] - 48;
    }
    if(a == b && s1[a-1] + s2[a-1] - 2*48 > 9) s3[p++] = '1';
    else{
        for(int i = a; i < b; i++){
            
            if(s2[i] > 57){
                s3[p++] = s2[i] - 10;
                s2[i+1]++;
            }
            else s3[p++] =  s2[i];
        }
        if(s2[b] == 1)    s3[p++] = '1';
    }
    dao(s3, p);
    for(int j = 0; j < p; j++){
        printf("%c", s3[j]);
    }
    printf("\n");
}
main(){
    int t;
    scanf("%d\n", &t);
    while(t--){
        char s1[500], s2[500];
        scanf("%s", s1);
        scanf("%s", s2);
       int len1 = strlen(s1);
       int len2 = strlen(s2);
       if(len1 > len2) xuly(len2, len1, s2, s1);
       else xuly(len1, len2, s1, s2);
    }
}