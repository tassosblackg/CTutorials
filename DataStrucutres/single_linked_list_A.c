#include <stdlib.h>
#include <stdio.h>
#include <string.h>

struct point_node{
    int x;
    int y;
    struct point_node *next;
};


int main(){
    struct point_node point1,point2;
    point1.x = 10;
    point1.y = 4;
    point1.next=NULL;

    point2.x = 32;
    point2.y = 20;
    point2.next=NULL;

    point1.next=&point2; //link point1 -> point2



    printf("My point node is (%d,%d) and next point node is %d\n",point1.x,point1.y,point1.next);

    printf("My point node is (%d,%d) and next point node is %d \n",point2.x,point2.y);

    printf(" Print second node use link from node1 = (%d,%d)\n",(point1.next)->x,(point1.next)->y); // 1st way point to member variable
    printf(" Print second node use link from node1 = (%d,%d)\n",(*point1.next).x,(*point1.next).y); //2nd  way point to member variable




    return 0;
}
