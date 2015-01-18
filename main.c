#include <stdio.h>
#include <stdlib.h>

#include "pointers_a.h"
#include "pointers_b.h"
#include "struct_a.h"
#include "list_a.h"
#include "callback.h"

int main(void) {

	int ret = -1;

	ret = pointers_a();
	ret = pointers_b();
	ret = struct_a();
	ret = list_a();
	ret = callback();

	return ret;
}
