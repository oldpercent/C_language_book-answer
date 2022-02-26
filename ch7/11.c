# include <stdio.h>
int main() {
	int a, sum;
	for ( int i = 1 ; i <= 1000 ; i++ ) {
		sum = 0;
		for ( int j = 1 ; j < i ; j++ )
			if ( i % j == 0 )
				sum = sum + j;
		if ( sum == i ) 
			printf( "%d ", i );
	}

	return 0;
}
