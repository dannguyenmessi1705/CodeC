#include <stdio.h>
#include <math.h>
int Prime(int n){
    if (n<2){
        return 0;
    }
    for (int i=2;i<=sqrt(n);i++){
        if (n%i==0){
            return 0;
        }
    }
    return 1;
}
void swap(int a, int b){
    int tmp = a;
    a = b;
    b = tmp;
}
int Can(int a, int b){
    if (a>b){
        swap(a, b);
    }
    for (int n=a;n<=b;n++){
        if (Prime(n)==1){
            printf("%d ", n);
        }
    }
}
int Fi(int n){
    if (n==1 || n==2){
        return 1;
    }
    return Fi(n-1) + Fi(n-2);
}
int main(){
    int a, b;
    scanf("%d %d", &a, &b);
    printf("%d", Can(a, b));
}