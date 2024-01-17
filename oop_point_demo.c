


#include"oop_point_demo.h"


void run_oop_point(void){

// instantiate
Point *point = point_new();

point_set_value(point, 1, 1);

printf("x=%d, y=%d\n", point_get_x(point), point_get_y(point));


} // End run_oop_point()