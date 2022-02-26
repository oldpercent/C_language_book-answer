# include <stdio.h>
int main() {
	int sum = 0;
	for ( int i = 1 ; i <= 10 ; i++ ) {
		printf( "%d ",i *i );
		sum = sum + i * i ;
	}
	printf( "%d", sum );
}
	       	
