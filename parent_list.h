#include <stdlib.h>
#include <stdio.h>

typedef struct parent_list {
	struct parent *first;
	
}parent_list;

typedef struct parent {
	char *parent_address;
	struct parent *next;
	
}parent;
