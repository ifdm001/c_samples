#include <stdio.h>
#include <stdlib.h>

#include "pointers_b.h"

int pointers_b(void)
{

	char p[3] = {'a', 'b', 'c'};

	for(int i = 0; i < 3; i++)
		printf("pointers_b: %c\n", p[i]);

	char *q = malloc(3 * sizeof(char));

	if(q == NULL)
		return -1;

	q[0] = 'd';
	q[1] = 'e';
	q[2] = '\0';

	printf("pointers_b: %s\n", q);

	free(q);

	return 0;
}
