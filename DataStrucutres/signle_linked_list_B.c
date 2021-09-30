#include <stdlib.h>
#include <stdio.h>
#include <string.h>

struct point_node{
    int x;
    int y;
    struct point_node *next;
};
typedef struct point_node node; // rename structure

int main(){
    node *point1,*point2;
    // point1 = (struct point_node *) malloc(sizeof(struct point_node));
    point1 = (node *) malloc(sizeof(node)); // reserve memory
    point2 = (node *) malloc(sizeof(node));

    point1->x = 10;
    point1->y = 4;
    point1->next=NULL;

    point2->x = 32;
    point2->y = 20;
    point2->next=NULL;


    point1->next = point2; // add link point 1 to point 2


    printf("My point node is (%d,%d) and next point node is %d\n",point1->x,point1->y,point1->next);

    printf("My point node is (%d,%d) and next point node is %d \n",point2->x,point2->y);





    return 0;
