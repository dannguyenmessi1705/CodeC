#include<stdio.h>
#include<string.h>


struct sp {
    int stt ;
	char name[100];
	char nhom[100];
	double giamua ;
	double giaban ;

};


int main () {
	int n;
	struct sp ten[100] ;
	double b[10005] ;
	double c[10005] ;
	int x = 0 ;
	int m = 0 ;
	int kt = 1;
	scanf("%d", &n );
	for ( int i = 1 ; i <= n ; i++ ) {
		ten[i].stt = i ;
		scanf("\n");
		gets( ten[i].name );
		scanf("\n");
		gets( ten[i].nhom );
		scanf("%lf %lf", &ten[i].giamua, &ten[i].giaban );
		double s = ten[i].giaban - ten[i].giamua ;
		b[m] = s ;
		m++ ;

	}
	c[x] = b[0] ;
	x++ ;
	for ( int i = 1 ; i < m; i++ ) {
		for ( int j = i - 1 ; j >=  0 ; j-- ) {
			if ( b[i] == b[j] ) {
				kt = 0 ;
				break ;
			}
		}
		if ( kt == 1 ) {
			c[x] = b[i] ;
			x++;
		}
		kt = 1 ;
	}
	for ( int i =0 ; i < x ; i ++ ) {
		for ( int j = x -1 ; j > i ; j-- ) {
			if ( c[j] > c[j-1] ) {
				double tmp = c[j] ;
				c[j] = c[j-1] ;
				c[j-1] = tmp ;
			}
		}
	}
	int h = 0 ;
	while ( h  < x ) {
		for ( int i = 1 ; i <= n ; i++ ) {
			double S = ten[i].giaban - ten[i].giamua ;
			if ( S == c[h] ) {
				printf("%d ", ten[i].stt);
				for ( int l = 0 ; l < strlen(ten[i].name); l++ ) {
					printf("%c",ten[i].name[l] );
				}
				printf(" ");
				for ( int l = 0 ; l < strlen(ten[i].nhom); l++ ) {
					printf("%c",ten[i].nhom[l] );
				}
				printf(" %.2lf\n", S );
			}
		}
		h++ ;
	}
	return 0 ;

}