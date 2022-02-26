# include <stdio.h>
int main() {
	int a;
	do {
		scanf( "%d", &a ) ;
	} while( a % 2 != 0 );

	int sum = 0;
	for ( int i = 0 ; i <= a ; i = i + 2 ) 
		sum = sum + i ;
	printf( "%d", sum );
	return 0;
}
