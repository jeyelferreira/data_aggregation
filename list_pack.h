/*
 * list_pack.h - definitions and declarations of the integer list
 */

#ifndef LIST_PACK
#define LIST_PACK

#include <stdlib.h>
#include <stdio.h>

typedef struct lst_iitem {
   char *index;
   char *value;
   struct lst_iitem *next;
} lst_iitem_t;
/* list_t */
typedef struct {
   lst_iitem_t * first;
} list_t;

/* pck_lst_new - allocates memory for list_t and initializes it */
list_t* pck_lst_new();
/* pck_lst_destroy - free memory of list_t and all its items */
void pck_lst_destroy(list_t *);
/*pck_lst_insert_datagram*/
void pck_lst_insert_datagram(list_t *list, char*index, char*value);
/*pck_lst_print_datagram*/
void pck_lst_print_datagram(list_t *list);
/* pck_lst_get_datagram */
char *pck_lst_get_datagram(list_t *list, char *index);
/* pck_lst_update_information_pck */
void pck_lst_update_value(list_t *list, char*index, char*value);
/* pck_lst_copy  listD list dest and listS list source*/
void pck_lst_copy(list_t *listD ,list_t *listS );
/* pck_lst_isEmpty */
char pck_lst_isEmpty(list_t *list);
//


#endif
