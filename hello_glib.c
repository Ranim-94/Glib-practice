
#include"hello_glib.h"


void run_hello_glib(void){


GList* list = NULL;
 
list = g_list_append(list, "Hello world!");
 
 printf("The first item is '%s'\n", g_list_first(list)->data);


} // End run_hello_glib()