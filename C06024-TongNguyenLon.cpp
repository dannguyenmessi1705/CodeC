#include <stdio.h>
#include <string.h>
#include <ctype.h>
 
void print(char *a, int l);
int read(char *a);
int sum(char *a, char* b, char * c, int al, int bl); 
int main(void) {
 char a[501], b[501], c[501];
 int al, bl, k;
 scanf("%d", &k);
 while(k--){
 al = read(a);
 bl = read(b);
 int l = sum(a, b, c, al, bl);
 print(c, l);
 }
 return 0;
}
 
int sum(char *a, char* b, char * c, int al, int bl)
{
 int l = al > bl? al:bl;
        int i = l;
        char carry = 0;
        while(al > 0 && bl > 0)
        {
                char val = a[--al]  + b[--bl] + carry;
                c[i--] = val % 10;
                carry =   val / 10;
        }
        while(al > 0)
        {
                char val = a[--al]  + carry;
                c[i--] = val % 10;
                carry =   val / 10;
        }
        while(bl > 0)
        {
                char val =  b[--bl] + carry;
                c[i--] = val % 10;
                carry =   val / 10;
        }
        c[0] = carry;
 return l+1;
} 
 
int read(char *a)
{
 char c;
 int i = 0;
 do
 {
 c = getchar();
 }
 while(isspace(c));
 while(isdigit(c))
 {
 a[i++] = c - 48; 
 c = getchar();
 }
 return i;
}
 
void print(char *a, int l)
{
 int i;
 if(a[0] != 0)
 printf("%d", a[0]);
 for(i = 1; i < l; i++)
 {
 printf("%d", a[i]);
 }
 printf("\n");
}