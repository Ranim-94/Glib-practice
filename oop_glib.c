

#include"oop_glib.h"

#include"my-manager.h"



void run_oop_glib(void){


// using my-manager class


// 1st object  
MyManager *m1 = my_manager_new("sean", 43);
  
// 2nd object
MyManager *m2 = my_manager_new("nate", 40);

// displaying some information to console
printf("%s %d\n", m1->name, my_manager_get_age(m1));
    
printf("%s %d\n", m2->name, my_manager_get_age(m2));

g_object_unref(m1);

g_object_unref(m2);


} // End run_oop_glib()