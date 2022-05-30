#include <stdio.h>

int main()
{
	int a[10];
	
	a[0] = 12;
	a[1] = 1234;
	a[9] = 15;
	a[3] = a[0];
	printf("%d\n", a[3]);

}
