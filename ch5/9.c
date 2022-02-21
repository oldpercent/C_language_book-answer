# include <stdio.h>
int main() {
	int a = 5, b = 3;
	int anum = 0, bnum = 0, cnum = 0, dnum = 0;
	anum = (a++)+b;
	bnum = (++a)+b;
	cnum = (a++)+(b++);
	dnum = (++a)+(++b);
	a+=a+(b++);
	printf( "%d\n", anum );
	printf( "%d\n", bnum );
	printf( "%d\n", cnum );
	printf( "%d\n", dnum );
	printf( "%d\n", a );
	printf( "%d\n", b );
	return 0;
}
