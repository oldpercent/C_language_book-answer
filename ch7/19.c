# include <stdio.h>
int main() {
	int i = 1, sum = 0;
	do {
		sum = sum + i;
		i++;
	} while ( sum < 1000 );
	printf( "%d", i );
	return 0;
}
