# include <stdio.h>
int main() {
	int a;
	scanf( "%d", &a );
	if ( a < 0 )
		printf( "<0" );
	if ( a > 0 )
		printf( ">0" );
	if ( a == 0 )
		printf( "==0" );
	return 0;
}
