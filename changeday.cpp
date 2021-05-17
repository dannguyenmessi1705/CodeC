#include <stdio.h>
int main(){
    int d;
    scanf("%d", &d);
    if (d < 0 || d > 1000)
    return 0;
    int n = d / 365, th = d / 7, ng = d % 7;
    if (d <= 365)
    printf("%d %d %d", n, th, ng);
    else if (d <= 730)
    { int m = d - 365;
    int n = d / 365, th = m / 7, ng = m % 7;
    printf("%d %d %d", n, th, ng);
    }
    else if (d <= 1000)
    { int l = d - 730;
    int n = d / 365, th = l / 7, ng = l % 7;
    printf("%d %d %d", n, th, ng);
    }
}