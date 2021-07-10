#include <stdio.h>
int main(){
    char c;
    int t, a, check=0;
    scanf("%d", &t);
    while(t--){
        int i=0, chan=0, le=0;
        do{
            scanf("%d", &a);
            i++;
            if(a%2==0) chan++;
            else le++;
            scanf("%c", &c);
        }
        while(c!='\n');
        if(i%2==0 && chan>le) printf("YES\n");
        else if(i%2==1 && le>chan) printf("YES\n");
        else printf("NO\n");
}
}