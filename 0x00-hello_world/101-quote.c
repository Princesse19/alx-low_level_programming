#include <stdio.h>
#include <unistd.h>
/**
 * prints and that piece of art is useful" - Dora Korpar, 2015-10-19, 
 * followed by a new line, to the standard error.
 */
int main(void)
{
	write(2,"and that piece of art is useful - Dora Korpar, 2015-10-19\n", 58);
	return (1);
}
