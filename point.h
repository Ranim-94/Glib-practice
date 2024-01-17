

#include <glib-object.h>

#define TYPE_POINT	(point_get_type())
/*
 - this what we call utility macro
 - Explanation:
 -TYPE_POINT will expand to point_get_type()
 and it will return the class type indentifier, a GType
 assignment for the Point class
 -we will see this in any place we call for an object or a
 type indentifier

 - the TYPE_POINT (GType) will be used later
 as argument in my-manager.c in point_new()
 when creating the object 
    
*/

// instance structure: here we list our attributes (properties)

typedef struct _Point
{
	GObject parent_instance;
	// necessary for inheritance
    // because all object used features from GObject base class
} Point;

/*
typedef struct _PointClass
{
	GObjectClass parent_class;

} PointClass;
*/

G_DECLARE_FINAL_TYPE(Point, my_point, MY, POINT, GObject)
/* Syntax:
- G_DECLARE_FINAL_TYPE(ModuleObjName, module_obj_name, 
    MODULE, OBJ_NAME, ParentName)

- this macro is used to declare class structure, that is <->
     
	typedef struct _PointClass{
	
	GObjectClass parent_class;
	
	} PointClass;

   - If we use this, this mean that this class is not
    derivable
*/


/* GType point_get_type(void); */

// constructor
Point* point_new(void);

// public methods
void point_set_value(Point *point, int x, int y);

int point_get_x(Point *point);

int point_get_y(Point *point);
