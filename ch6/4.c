# include <stdio.h>
int main() {
	int a;
	scanf( "%d", &a );
	if ( a < 0 )
		a = a * -1;
	printf( "%d", a );
	return 0;
}
