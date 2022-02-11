# include <stdio.h>
int main() {
	char str[11];
	scanf( "%s", str );
	printf( "\"%s\"\n", str );
	printf( "\\%20s\\\n", str );
	printf( "\\%+20s\\\n", str );
	return 0;
}
