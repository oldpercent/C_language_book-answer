# include <stdio.h>
int main() {
	int w, h;
	scanf( "%d", &w );
	scanf( "%d", &h );
	if ( w > 90 ) {
		if ( h < 180 )
			printf( "Too fat" );
		else 
			printf("Not too fat" );
	}
	else
		printf( "Not too fat" );
	return 0;
}
