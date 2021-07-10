#include<stdio.h>
#include<string.h>
#include<ctype.h>
main(){
    int t, q = 0, b[1000] = {0};
        char s[50], x[50][52], mail[1000][55];
    scanf("%d\n", &t);
    while(t--){
        int  i = 0;
        gets(s);
        for(int j = 0; j < strlen(s); j++){
            s[j] = tolower(s[j]);
        }
        char *p = strtok(s, " ");
        while( p != NULL){
            strcpy(x[i], p);
            i++;
            p = strtok( NULL, " ");
        }
        strcpy(mail[q], x[i-1]);
        int len = strlen(mail[q]);
        for(int j = 0; j < i - 1; j++){
            mail[q][len++] = x[j][0];
        }
        q++;
    }
    for(int j = 0; j < q - 1; j++){
        if(b[j] == 0){
            int k = 50;
            for(int d = j + 1; d < q; d++){
                if(b[d] == 0 && strcmp(mail[j], mail[d]) == 0){
                    b[d] = 1;
                    int lenth = strlen(mail[d]);
                    if(k > 57){
                         mail[d][lenth++] = 49;
                         mail[d][lenth++] = k - 10;
                         k++;
                    }
                    else{

                    mail[d][lenth++] = k;
                    k++;
                    }
                }
            }
        }
    }
    for(int j = 0; j < q; j++){
        printf("%s@ptit.edu.vn\n", mail[j]);
    }
}