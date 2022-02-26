# include <stdio.h>
# define tri(n) (n)*(n)*(n)
int main() {
	int a, b, c;
	for ( int i =100 ; i < 1000 ; i++ ) {
		a = i / 100;
		c = i % 10;
		b = ( i - a * 100 - c ) / 10;
		if ( tri(a) + tri(b) + tri(c) == i )
			printf( "%d ", i );
	}
	return 0;
}
