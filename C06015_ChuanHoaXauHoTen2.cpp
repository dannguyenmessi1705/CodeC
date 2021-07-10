#include<stdio.h>
#include<string.h>
#include<ctype.h>
main(){
    int t;
    char s[50], a[50][50];
    scanf("%d", &t);
    gets(s);
    while(t--){
        gets(s);
        char *p = strtok(s, " ");
        int dem = 0;
        while(p != NULL){
            dem++;
            if(dem == 1){
                for(int i = 0; i < strlen(p); i++){
                    p[i] = toupper(p[i]);
                }
                strcpy(a[0], p);
                p = strtok(NULL, " ");
            }
            else{
                p[0] = toupper(p[0]);
                for(int i = 1; i < strlen(p); i++){
                    p[i] = tolower(p[i]);
                }
                strcpy(a[dem-1], p);
                p = strtok(NULL, " ");
            }
        }
        for(int j = 1; j < dem - 1; j++){
            printf("%s ", a[j]);
        }
        if(dem != 0){
            printf("%s, ", a[dem-1]);
        printf("%s\n", a[0]);
        }
        
    }
}