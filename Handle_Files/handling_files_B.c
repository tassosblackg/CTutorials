#include <stdlib.h>
#include <stdio.h>
int main(){

    char *filename2 = "text2.txt"; // csv format file
    char *filename3 = "text3.txt"; //non existing file
    FILE *fp; //file pointer
    if( (fp = fopen(filename2,"r")) != NULL){
        //example3 read line from .txt with csv like format
        char name[21],address[31];
        char age[3];
        char terminal_char; // in order to read the end char of EOF
        int scan_val;
        fscanf(fp,"%*[^,],%*[^,],%*[^,\n]");    // scip the first line
        while(!feof(fp)){
            scan_val=(fscanf(fp, "%20[^,],%30[^,],%2[^,\n]%c",name,address,age,&terminal_char));

            printf("Rs=%d \n",scan_val); // check scan_val returned
            if(scan_val!=EOF)
                printf("%s %s %s\n",name,address,age);
                printf("%d\n",atoi(age));   //convert string to int

        }
    }else{
        printf("ERROR while trying opening the file!\n");
    }

    return 0;
}
