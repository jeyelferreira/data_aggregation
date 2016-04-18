#include <stdlib.h>
#include <stdio.h>
#include "list_pack.h"
#include <string.h>
list_t* pck_lst_new()
{
   list_t *list;
   list = (list_t*) malloc(sizeof(list_t));
   list->first = NULL;
   return list;
}
void pck_lst_destroy(list_t *list)
{
	struct lst_iitem *item, *nextitem;

	item = list->first;
	while (item != NULL){
		nextitem = item->next;
		free(item);
		item = nextitem;
	}
	free(list);
}

void pck_lst_insert_datagram(list_t *list, char *index, char *value)
{
	lst_iitem_t *item;
	item = (lst_iitem_t *) malloc (sizeof(lst_iitem_t));
	item->index = index;
    item->value = value;
	item->next = list->first;
	list->first = item;
}

void pck_lst_print_datagram(list_t *list)
{
    lst_iitem_t *item;
    item = list->first;
    printf("Information\n[Index]:[Value]\n");
    while (item != NULL){
        printf(" [%s]:[%s]\n",item->index,item->value);
        item = item->next;
    }
}
char * pck_lst_get_datagram(list_t *list, char *index)
{
    lst_iitem_t *item = NULL;
    item = list->first;
    while (item != NULL){
      if( strcmp (index,item->index) == 0 )
        return item->value;
        item = item->next;
    }
    return NULL;

}
void pck_lst_update_value(list_t *list, char*index, char*value){

    lst_iitem_t *item = NULL;
    item = list->first;
    while (item != NULL){

      if( strcmp (index, item->index) == 0 ){
         item->value = value;
         break;
      }
        item = item->next;
    }

}
void pck_lst_copy(list_t *listD, list_t *listS ){
    lst_iitem_t *item = NULL;
    item = listS->first;
    while (item != NULL){
        pck_lst_insert_datagram(listD,item->index,item->value);
        item = item->next;
    }
}
char pck_lst_isEmpty(list_t *list){
    return ((list != NULL) ? '0':'1' );
}
