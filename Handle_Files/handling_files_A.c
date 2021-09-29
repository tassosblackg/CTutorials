#include <stdlib.h>
#include <stdio.h>
int main(){

    char *filename1 ="text1.txt"; // file to read
    char *filename2 = "text2.txt"; // csv format file
    char *filename3 = "text4.txt"; //non existing file
    char *string2write = "hello, I'm writing to a file.";
    FILE *fp; //file pointer

    // if filename is valid
    if( (fp = fopen(filename3,"a")) != NULL){
        // do all the stuf
        // char *line=(char*)malloc(21);

        // example1 read formatted line  till the EOF
        char my_name[21];
        int age;
        while ( (fscanf(fp,"%s %d",my_name,&age)!=EOF) ){
            printf("%s * %d \n",my_name,age);
        }

        //example2 read line per line till the EOF
        // char *line2 = NULL;
        size_t length;
        while((getline(&line2,&length,fp)) >= 0){
            printf("line_is =%s \n",line2);

        }

        //example4 writing or appending
        fprintf(fp,"\n %s",string2write);




    }else{
        printf("ERROR while trying opening the file!\n");
    }

    //always close file after proccessing <-- IMPORTANT
    fclose(fp);

    // printf("Hello World!\n* \n");
    return 0;
}
