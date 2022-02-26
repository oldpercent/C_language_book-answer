# include <stdio.h>
int main() {
	int a,count = 1;
	scanf( "%d", &a );
	for ( int i = 1 ; i < a ; i++ )
		if ( a % i == 0 )
			count = i ;
	if ( count == 1 )
		printf( "prime" );
	else
		printf( "not" );
	return 0;
}
