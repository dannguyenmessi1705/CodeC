#include <stdio.h>
int main(){
    int a, b, c;
    printf("\nNhap a = "); scanf("%d", &a);
    printf("\nNhap b = "); scanf("%d", &b);
    printf("\nNhap c = "); scanf("%d", &c);
    int max = a;
    if (b > max && b > c)
    { printf("\nGia tri lon nhat la %d", b);
    } else if (b > max && b < c)
    { printf("\nGia tri lon nhat la %d", c);
    } else if (b > max && b == c)
    { printf("\nGia tri lon nhat la %d", b);
    } else if (b < max && max > c)
    { printf("\nGia tri lon nhat la %d", max);
    } else if (b < max && max <c)
    { printf("\nGia tri lon nhat la %d", c);
    } else if (b < max && max == c)
    { printf("\nGia tri lon nhat la %d", c);
    } else if (b == max && b < c)
    { printf("\nGia tri lon nhat la %d", c);
}else if(b == max && b > c)
{ printf("Gia tri lon nhat la %d", b);
}else
    { printf("\nCa 3 gia tri bang nhau");
    }
}
