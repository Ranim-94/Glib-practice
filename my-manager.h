


#pragma once

#include <glib-object.h>

// source: https://github.com/nathanm2/glib-examples/tree/master/gobject-private

#define MY_TYPE_MANAGER (my_manager_get_type())
/*
 - this what we call utility macro
 - Explanation:
 -MY_TYPE_MANAGER will expand to my_manager_get_type()
 and it will return the class type indentifier, a GType
 assignment for the Manager class
 -we will see this in any place we call for an object or a
 type indentifier

 - the MY_TYPE_MANAGER (GType) will be used later
 as argument in my-manager.c in my_manager_new()
 when creating the object 
    
*/

G_DECLARE_FINAL_TYPE(MyManager, my_manager, MY, MANAGER, GObject)

// instance structure
// here we list our attributes (properties)
struct _MyManager {
    
    GObject parent_instance;
    // necessary for inheritance
    // because all object used features from GObject base class
     

    char *name;
};

MyManager *my_manager_new(const char *name, int age);

int my_manager_get_age(MyManager *self);
