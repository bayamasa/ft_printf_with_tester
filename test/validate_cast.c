#include <stdlib.h>
#include <limits.h>
#include <stdio.h>

int main()
{
	// size_t i = INT_MIN - 1;
	int j = INT_MIN - 1;
	printf("cast size_t = %zu, int = %d",j, j);
	return (0);
}
