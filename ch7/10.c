# include <stdio.h>
int main() {
	float sum = 0;
	int a;
	scanf( "%d", &a );
	for ( int i = 1 ; i <= a ; i++ ) 
		sum = sum + 1.0 / i ;
	printf( "%f", sum );
	return 0;
}
