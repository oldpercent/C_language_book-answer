# include <stdio.h>
int main() {
	char ch;
	scanf( "%c", & ch );
	if ( ch >= '0' && ch <= '9' )
		printf( "Number" );
	if ( ch >= 'a' && ch <= 'z' )
		printf( "Small alphabet" );
	if ( ch <= 'A' && ch <= 'Z' )
		printf( "Bigger alphabet" );
	return 0;
}
