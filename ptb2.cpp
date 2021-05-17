#include<math.h>
#include<stdio.h>
int main()
{
    float a,b,c,d;
    scanf("%f%f%f",&a,&b,&c);
    if(a==0)
    {
        if(b==0)
            {
                if(c==0)
                    return 0;
                else
                    printf("NO");
            }
        else
            printf("%.2f",-c/b);
    }
    else
    {
        d=b*b-4*a*c;
        if (d<0)
            printf("NO");
        else if (d==0)
            printf("%.2f",-b/(2*a));
        else
            printf("%.2f %.2f",(-b+sqrt(d))/(2*a),(-b-sqrt(d))/(2*a));    
    }}