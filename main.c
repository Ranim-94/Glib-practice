



#include<stdio.h>
#include"hello_glib.h"
#include"oop_glib.h"


#define DEMO_CHOICE 0

int main(void) {
 
int demo_list_choice[] = {0,1};

// selecting a demo from demo_list_choice[]
int demo_to_run = demo_list_choice[DEMO_CHOICE];

switch (demo_to_run){

case 0: 
    
    run_hello_glib(); // demo #0
    break;

case 1: 
    
    run_oop_glib(); // demo #1
    break;

default:
    break;

} // End switch case

 
 return 0;

}// End main() 