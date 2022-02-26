# include <stdio.h>
int main() {
	int pass = 2048, count = 0, entr;
	while ( 1 ) {
		scanf( "%d", &entr );
		if ( entr == pass ) { 
			printf( "True" );
			break;
		}
		else {
			printf( "Flase" );
			count++;
		}

		if ( count == 3 ) {
			printf( "Too much" );
			break;
		}
	}
	return 0;
}
