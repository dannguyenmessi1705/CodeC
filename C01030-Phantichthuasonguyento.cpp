#include <stdio.h>
int main() {
	unsigned int n;
    int k;
    scanf("%d", &k);
    while(k--){
	scanf("%u", &n);
	if(n < 2) {
		return 0;
	} else {
		unsigned int i = 2;
		while(n > 1) {
			if(n % i == 0) {
				printf("%u", i);
				if(n != i) {
					printf(" ");
				}
				n /= i;
			} else {
				i++;
			}
		}
	}
    printf("\n");
    }	
	return 0;
}