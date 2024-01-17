

#include"point.h"

#include <stdio.h>


// necessary to decalare the class Point
G_DEFINE_TYPE (Point, point, G_TYPE_OBJECT);
 
struct _PointPrivate {
	int x, y;
};

typedef struct _PointPrivate PointPrivate;

// used for initialization in constructor (class)
#define POINT_GET_CLASS(object)		(G_TYPE_INSTANCE_GET_CLASS((object), TYPE_POINT, PointClass))

#define POINT_GET_PRIVATE(object)	(G_TYPE_INSTANCE_GET_PRIVATE((object), TYPE_POINT, PointPrivate))

static void
point_class_init (PointClass* klass){
// this is a class constructor
// called only once when 1st object is instantiated

printf("In point_class_init()\n");
g_type_class_add_private (klass, sizeof (PointPrivate));

} // End point_class_init()

static void
point_init (Point* self){

// this is a object constructor 
// called every time we instantiate
	
	printf("In point_init()\n");

}

Point* point_new(void)
{
	return g_object_new(TYPE_POINT, NULL);
}

void point_set_value(Point* point, int x, int y)
{
	PointPrivate* priv = POINT_GET_PRIVATE(point);

	priv->x = x;
	priv->y = y;
}

int point_get_x(Point* point)
{
	PointPrivate* priv = POINT_GET_PRIVATE(point);

	return priv->x;
}

int point_get_y(Point* point)
{
	PointPrivate* priv = POINT_GET_PRIVATE(point);

	return priv->y;
}
