# include <stdio.h>
int main() {
	int i = 1, j = 1;
	do {
		j = 1;
		do {
			printf( "%d * %d = %d ", j, i, i*j );
			j++;
		} while ( j <= 9 );
		printf( "\n" );
		i++;
	} while ( i <= 9 );
	return 0;
}
