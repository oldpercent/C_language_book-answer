# include <stdio.h>
int main() {
	int a, flag = 0;
	for ( a = 0 ; flag != 1 ; a++ )
		if ( a % 3 == 1 && a % 5 == 3 && a % 7 == 2 ) {
			printf( "%d", a );
			flag = 1;
		
		}
	return	0;
}
