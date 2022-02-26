# include <stdio.h>
int cub ( int x ) {
	return x * x * x;
}

int main () {
	printf( "%d", cub(2) );
	return 0;
}
