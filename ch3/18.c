# include <stdio.h>
int main() {
	float num1 = 123.39f, num2 = 3.8e5f;
	int num1Int, num2Int  ;
	num1Int = ( int ) num1;
	num2Int = ( int ) num2;
	printf( "%d %d", num1Int, num2Int );
	return 0;
}
