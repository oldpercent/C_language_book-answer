# include <stdio.h>
void kitty(int k ) {
	for ( int i = 0 ; i < k ; i++ )
		printf( "Hello kitty\n" );
}
int main() {
	int a;
	scanf( "%d", &a );
	kitty(a);
	return 0;
}
