#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>
int main(int argc __attribute__((unused)), char *argv[])
{
/**	int i;
		for (i = 1; i < argc; i++)
		{
			printf("%d\n", isdigit(argv[i]));
		}
		return (0);
*/
printf("%d\n", int(argv[0]));
return (0);
}
