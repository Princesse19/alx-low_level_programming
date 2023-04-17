#include <stdio.h>
#define SUM(x,y) ((x) + (y))
/**
 * define -defining a macro to sum two integers.
 */
int main(void)
{
	int x = 98,y = 1024;
	printf("%d",SUM(x,y));
	return(0);
}
