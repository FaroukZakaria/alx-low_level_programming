#include <stdio.h>

/**
*main -Entry point
*Return: Always 0 (Success)
*/

int main() {
	char C;
	int I;
	long L;
	long long LL;
	float F;
	printf("Size of a char: %zu byte(s)", sizeof(C));
	printf("Size of an int: %zu byte(s)", sizeof(I));
	printf("Size of a long int: %zu byte(s)", sizeof(L));
	printf("Size of a long long int: %zu byte(s)", sizeof(LL));
	printf("Size of a float: %zu byte(s)", sizeof(F));
	return (0);
}
	
