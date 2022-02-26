# include <stdio.h>
int main() {
	int a, cont, count = 1;
	scanf ( "%d", &a );
	for ( int i = 1 ; i < a ; i++ ) {
		count = 1;
		for ( int j = 1 ; j < i ; j++ ) {
			if ( i % j == 0 ) count = j ;
		}
		if ( count == 1 )
			cont = i;
	}

	printf( "%d", cont );
}
