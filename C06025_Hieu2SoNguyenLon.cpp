#include<stdio.h>
#include<string.h>
void dao(char s[], int len){
    char s4[1000] = {};
    for(int i = len - 1; i >= 0; i--){
        s4[len - 1 -i] = s[i];
    }
    strcpy(s, s4);
}
void xuly(int a, int b, char s1[], char s2[]){
    char s3[1000] = {};
    int p = 0;
    dao(s1, a);
    dao(s2, b);
    for(int i = 0; i < a; i++){
        if(s2[i] - s1[i] < 0){
            s3[p++] = s2[i] - s1[i] + 10 + 48;
            s2[i+1]--;
        }
        else    s3[p++] = s2[i] - s1[i] + 48;
    }
    if(s2[a] < 48){
        for(int i = a; i < b; i++){
            if(s2[i] < 48){
                s3[p++] = s2[i] + 10;
                s2[i+1]--;
            }
            else s3[p++] = s2[i];
        }
    } else{
        for(int j = a; j < b; j++){
            s3[p++] = s2[j];
        }
    }
    dao(s3, p);
    int key;
    for(int i = 0; i < p; i++){
        if(s3[i] != 48){
            key = i;
            break;
        }
    }
    for(int j = key; j < p; j++){
        printf("%c", s3[j]);
    }
    printf("\n");
}
main(){
    int t;
    scanf("%d\n", &t);
    while(t--){
        char s1[1000], s2[1000];
        scanf("%s", s1);
        scanf("%s", s2);
       int len1 = strlen(s1);
       int len2 = strlen(s2);
       if(len1 > len2) xuly(len2, len1, s2, s1);
       else if(len1 < len2) xuly(len1, len2, s1, s2);
       else{
           if(strcmp(s1, s2) > 0) xuly(len2, len1, s2, s1);
           else xuly(len1, len2, s1, s2);
       }
    }
}