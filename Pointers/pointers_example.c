#include <stdlib.h>
#include <stdio.h>

void swap(int *a, int *b) {

   int temp;
   temp = *a;    // save the value at address x
   *a = *b;      // assign b into a
   *b = temp;    // assign temp into b
}

void write_array(int *ar){
    // ar = (char *)malloc(sizeof(char)*21); // dynamic allocation of memory
    // char *str_var = "Hello, I am an array.";
    // ar = str_var; // assign string into array

    for(int i=0;i<10;i++){
        ar[i]= i*2;
    }
    // printf("%s\n",ar);
}

int main(){

   int var1 = 4;
   int var2 = 30;
   int *var1_p;

   // print var address
   printf("My var1 memory address = %d\n",&var1);
   var1_p=&var1; //set pointer to var1
   printf("My var1_p value is %d\n",*var1_p); //show the value store in *var1_p
   printf("My var1 value is %d\n",var1);

   printf("\n\n Swap Example\n");
   printf("Before swap, value of a : %d\n", var1 );
   printf("Before swap, value of b : %d\n", var2 );

   /* calling a function to swap the values */
   swap(&var1, &var2);

   printf("After swap, value of a : %d\n", var1 );
   printf("After swap, value of b : %d\n", var2 );

   // Example Int Array by reference

   // int my_array[10]; // 1st way

   //Dynamic Declaration
   int *my_array;
   my_array=(int *)malloc(sizeof(int)*10); //2nd way

   // pass by reference
   write_array(&my_array[0]);
   printf("\n Pass by reference array example.\n");
   // printf array's elements
   for(int i=0;i<10;i++){

       printf("My array says = %d\n",my_array[i]);
   }

    return 0;
}
