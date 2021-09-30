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
    node *headOfList,*point1,*point2,*point3;
    // point1 = (struct point_node *) malloc(sizeof(struct point_node));
    point1 = (node *) malloc(sizeof(node)); // reserve memory
    point2 = (node *) malloc(sizeof(node));
    point3 = (node *) malloc(sizeof(node));

    point1->x = 10;
    point1->y = 4;
    point1->next=NULL;

    point2->x = 32;
    point2->y = 20;
    point2->next=NULL;

    point3->x = -1;
    point3->y   = 10;
    point3->next = NULL;

    headOfList = point1; // link head to point1
    point1->next=point2; // link point1 to point2
    point2->next=point3; //link point2 to point3


    // print each node values
    printf("My point node1 is (%d,%d) and next point node is %d\n",point1->x,point1->y,point1->next);
    printf("My point node2 is (%d,%d) and next point node is %d \n",point2->x,point2->y);
    printf("My point node3 is (%d,%d) and next point node is %d \n",point3->x,point3->y);

    //print 2nd node values
    printf("My point node is (%d,%d)  \n",point1->next->x,point1->next->y);
    printf("My point node is (%d,%d) \n",headOfList->next->x,headOfList->next->y);

    // print each node using headOfList
    printf("My 1st point node is (%d,%d) \n",headOfList->x,headOfList->y); // node 1
    printf("My 2nd point node is (%d,%d) \n",headOfList->next->x,headOfList->next->y); // node 2
    printf("My 3d node is (%d,%d) \n",headOfList->next->next->x,headOfList->next->next->y); //node 3







    return 0;
}
