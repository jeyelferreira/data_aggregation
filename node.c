#include <stdlib.h>
#include <stdio.h>
#include "node.h"
#include "parent_list.h"
#include <string.h>

node* new_node(node_list* node_n, char *node_address){
	node *at_node;
	at_node->address = node_adress;
	at_node->color = WHITE;
	at_node->level = '0';
	at_node->mark = '0';
	at_node->listP = NULL;
	at_node->next = node_n->first;
	node_n->first = at_node;
	
   return at_node;
}

char *get_color(node_list *node_n, char *addr){
	node *n = NULL;
    n = node_n->first;
    while (n != NULL){
      if( strcmp (addr,n->address) == 0 )
    	return n->color;
      n = n->next;
    }
}

char *get_level(node_list *node_n, char *addr){
	node *n = NULL;
    n = node_n->first;
    while (n != NULL){
      if( strcmp (addr,n->address) == 0 )
    	return n->level;
      n = n->next;
    }
}

char *get_mark(node_list *node_n, char *addr){
	node *n = NULL;
    n = node_n->first;
    while (n != NULL){
      if( strcmp (addr,n->address) == 0 )
    	return n->mark;
      n = n->next;
    };
}

parent_list *get_parents_list(node_list *node_n, char *addr){
	node *n = NULL;
    n = node_n->first;
    while (n != NULL){
      if( strcmp (addr,n->address) == 0 )
    	return n->listP;
      n = n->next;
    }
}

void change_color(node_list *node_n, char *addr, char *new_color){
	node *n = NULL;
    n = node_n->first;
    while (n != NULL){
      if( strcmp (addr,n->address) == 0 ){
      	n->color = new_color;
      	break;
	  }
      n = n->next;
    }
}

void change_level(node_list *node_n, char *addr, char *new_level){
	node *n = NULL;
    n = node_n->first;
    while (n != NULL){
      if( strcmp (addr,n->address) == 0 ){
      	n->level = new_level;
      	break;
	  }
      n = n->next;
    }
}

void mark_it(node_list *node_n, char *addr, char *new_mark){
	node *n = NULL;
    n = node_n->first;
    while (n != NULL){
      if( strcmp (addr,n->address) == 0 ){
      	n->level = new_level;
      	break;
	  }
      n = n->next;
    }
}

void add_parent(node_list *node, char* p_address){
	parent_list *old_parents = node->listP;
	parent *n_parent;
	n_parent->parent_address = p_address;
	n_parent->next = old_parents->first;
	old_parents->first = n_parent;
}

void defineColor(node_list *node, list_t *list){
	
	lst_iitem *item = list->first;
	int level = atoi(item->value);
	
	//function char to int
	

	level++; // a number of hops to the sink
	//d("genRREQ");
	if(defColor.level < level)
        //reply.kind_msg = RREQ;
        //If the color is black and this color is white
		if (defColor.info == BLACK && myColor == WHITE){
			//define as gray and send to the neighbors
			Mypackage.myColor = GRAY;
			send(Package.Mypackage);
		}
		if (defColor.info == GRAY && myColor == WHITE){
			//define Black and send to the neighbor
			Mypackage.myColor = BLACK;
			send(Package.Mypackage);
		}
	}

}
