#include <stdio.h>

#include "callback.h"

void some_task(void (*f)(void));

void callme(void);

int callback(void)
{
	some_task(callme);
	return 0;
}

void some_task(void (*f)(void))
{
	int sum = 0;
	while(sum != 99)
		sum++;
	f();
}

void callme(void)
{
	printf("callback: Call me!");
}
