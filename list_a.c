#include <stdio.h>

#include "list_a.h"

struct list {
	int i;
	struct list *next;
};

void print_list(struct list *l);

 int list_a(void)
 {
	 struct list l, l1, l2;

	 l.i = 0;
	 l1.i = 1;
	 l2.i = 2;

	 l.next = &l1;
	 l1.next = &l2;

	 print_list(&l);

	 return 0;

 }

 void print_list(struct list *l)
 {
	 struct list *iterator = l;

	 for(int i = 0; i < 3; i++){
		 printf("list_a: %d\n", iterator->i);
		 iterator = iterator->next;
	 }
 }
