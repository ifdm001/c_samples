#include <stdio.h>
#include <stdlib.h>

#include "struct_a.h"

struct st {
	float f;
	char *s;
	int i[10];
};

int struct_a()
{
	struct st st1;

	st1.f = 1E-1;
	st1.i[0] = 2;

	printf("struct_a: %f\n", st1.f);
	printf("struct_a: %d\n", st1.i[0]);

	struct st *st2;

	st2 = malloc(sizeof(struct st));

	if(st2 == NULL)
		return -1;

	st2->f = 1E2;
	*(st2->i+1) = 2;

	printf("struct_a: %f\n", st2->f);
	printf("struct_a: %d\n", st2->i[1]);

	free(st2);

	struct st *st3;

	st3 = malloc(sizeof(struct st));

	if(st3 == NULL)
		return -1;

	st3->s = malloc(3 * sizeof(char));

	*(st3->s) = 'a';
	st3->s[1] = 'b';
	*(st3->s+2) = '\0';

	printf("struct_a: %s\n", st3->s);

	free(st3->s);
	free(st3);

	return 0;
}
