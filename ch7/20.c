# include <stdio.h>
int main() {
	int count = 0;
	int a;
	do {
		scanf( "%d", & a );
		for ( int i = 0 ; i < a ; i++ )
			printf( "*" );
		printf( "\n" );
		count++;
	} while ( count < 3 );

} 
