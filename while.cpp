#include <stdio.h>
 
int main(){
    /*
        In ra các s? l? <= 10.
     */
 
    int number = 1;
    while (number <= 10){
        if(number % 2 == 1){
            printf("%d\t", number);
        }
        number++;
    }
}
