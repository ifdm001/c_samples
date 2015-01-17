#include <stdio.h>
#include <stdlib.h>

void callbyvalue(int p);
void callbyreference_a(int *p);
void callbyreference_b(char **t);

int pointers_a(void)
{

	int *p = malloc(sizeof(int));

	if(p == NULL)
		return -1;

	*p = 1;

	printf("pointers_a: %d\n", *p);

	callbyvalue(*p);

	printf("pointers_a: %d\n", *p);

	callbyreference_a(p);

	printf("pointers_a: %d\n", *p);

	free(p);

	char **t;

	t = malloc(3 * sizeof(char*));
	if(t == NULL)
		return -1;

	for(int i = 0; i < 3; i++){
		*(t + i) = malloc(5 * sizeof(char));
		if(t[i] == NULL)
			return -1;

		(*(t + i))[0] = 'a';
		(*(t + i))[1] = 'b';
		(*(t + i))[2] = 'c';
		(*(t + i))[3] = 'd';
		(*(t + i))[4] = '\0';
	}

	t[1][1] = 'z';

	printf("pointers_a: %c\n", t[1][1]);

	free(t[1]);

	// It acquires the const qualifier, the pointer content can't be changed
	t[1] = "efgh\0";

	printf("pointers_a: %c\n", t[1][1]);

	for(int i = 0; i < 3; i++){
		printf("pointers_a: %s\n", *(t + i));
	}

	callbyreference_b(t);

	for(int i = 0; i < 3; i++){
		printf("pointers_a: %s\n", *(t + i));
	}

	for(int i = 0; i < 3; i++){
		free(*(t + i));
	}

	free(t);

	return 0;
}

void callbyvalue(int p)
{

	p = 2;
	printf("pointers_a: %d\n", p);

}

void callbyreference_a(int *p)
{

	*p = 3;
	printf("%d\n", *p);

}

void callbyreference_b(char **t)
{
	t[1] = malloc(5 * sizeof(char));
	(*(t + 1))[0] = 'a';
	(*(t + 1))[1] = 'b';
	(*(t + 1))[2] = 'c';
	(*(t + 1))[3] = 'd';
	(*(t + 1))[4] = '\0';
}
