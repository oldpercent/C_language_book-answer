# include <stdio.h>
int main() {
	int a;
	scanf( "%d", &a );
	int sum = 0;
	for ( int i = 1 ; i != a ; i = i + 2 )
		sum = sum + i ;
	printf( "%d", sum );
	return 0;
}
