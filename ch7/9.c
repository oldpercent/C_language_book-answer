#include <stdio.h>
int main() {
	int sum = 0;
	for ( int i = 1 ; i <= 50 ; i++ ) {
		if ( i % 2 != 0 )
			sum = sum + i * i;
		if ( i % 2 == 0 )
			sum = sum - i * i;
	}
	printf( "%d", sum );
	return 0;
}
