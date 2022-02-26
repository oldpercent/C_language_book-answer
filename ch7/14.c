# include <stdio.h>
int main() {
	float a = 3000.0;
	int count = 0;
	while ( a >=  5.0 ) {
		count++;
		a = a / 2;
	}
	printf( "%d", count );
	return 0;
}
