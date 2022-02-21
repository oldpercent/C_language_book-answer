# include <stdio.h>
int main() {
	for ( int i = 1 ; i <= 100 ; i++ )
		if ( i % 3 == 0 && i % 8 == 0 )
			printf( "%d ", i );
	return 0;
}
