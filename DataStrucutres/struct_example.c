#include <stdlib.h>
#include <stdio.h>
#include <string.h>

typedef struct {
    int x;
    int y;
}point;

typedef union {
    char mobile_phone[11];
    char home_phone[11];
}phone;

int main(){
    //struct point my_point,my_point2; // declare variable
    point my_point, my_point2; // declare variable using typedef

    //union phone my_phone; // 1st way for declaration
    phone my_phone,your_phone; //2nd way for declaration

    my_point.x = 2;
    my_point.y  = 3;
    my_point2.x = 0;
    my_point2.y = 6;
    printf("My point is (%d,%d)\n",my_point.x,my_point.y);
    printf("My second point is (%d,%d)\n",my_point2.x,my_point2.y);

    //union
    strcpy(my_phone.mobile_phone,"6977405555");

    strcpy(your_phone.home_phone,"222-405555");
    printf("My phone is %s\n",my_phone.mobile_phone);
    printf("Your home phone is %s\n",your_phone.home_phone);


    return 0;
}
