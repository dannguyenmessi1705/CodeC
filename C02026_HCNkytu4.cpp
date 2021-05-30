#include <stdio.h>
int main(){
    int a,b,i,j,min,max;;
    scanf("%d%d", &a, &b);
    if(a<=b) {min=a; max=b;}
    else {min=b; max=a;}
    int k=0, c=a, d=b;
    for(i=1;i<=a;i++){
      if(i==a){
          for(j=65;j<65+b;j++) printf("%c", j);
          printf("\n");
      }
      if(i<a){
          if(a<=b){
          for(j=64+min-k;j<64+max;j++) printf("%c", j);
          for(j=1;j<=c;j++) printf("%c", 64+b);
          printf("\n");
          k++;
          c--;
          }
          if(a>b){
              if(i<=a-b+1) {for(j=1;j<=b;j++) printf("%c", 64+b);
                printf("\n");
              }
              if(i>a-b+1){
                  k++;
                  d--;
                  for(j=64+min-k;j<64+b;j++) printf("%c", j);
                for(j=1;j<=d;j++) printf("%c", 64+b);
                 printf("\n");
                 
              }
          }
      }

}
}