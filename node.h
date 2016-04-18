#include <stdlib.h>
#include <stdio.h>
#include "parent_list.h"


typedef struct node {
	char *address;
	char *color;
	char *level;
	char *mark;
	struct parent_list *listP;
	struct attributes_node->next;
	
}node;

typedef struct node_list {
	struct node *first;
	
}node_list;

node* new_node(char *node_address);

char *get_color(node_list *node_n, char *addr);

char *get_level(node_list *node_n, char *addr);

char *get_mark(node_list *node_n, char *addr);

parent_list *get_parents_list(node_list *node_n, char *addr);

void change_color(node_list *node_n, char *addr, char *new_color);

void change_level(node_list *node_n, char *addr, char *new_level);

void mark_it(node_list *node_n, char *addr, char *new_mark);

void add_parent(node_list *node_n, char *addr, char* p_address);


