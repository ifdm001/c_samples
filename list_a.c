#include <stdio.h>

#include "list_a.h"

struct list {
	int i;
	struct list *next;
};

 int list_a(void)
 {
	 struct list l, l1;

	 l.i = 0;
	 l1.i = 1;

	 l.next = &l1;

	 printf("list_a: %d\n", l.next->i);

	 return 0;

 }
