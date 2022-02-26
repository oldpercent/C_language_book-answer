# include <stdio.h>
int mod(int x, int y ) {
	int i = x / y;
	return x - i * y;
}

int main() {
	printf( "%d", mod(17,5 ));
	return 0;
}
