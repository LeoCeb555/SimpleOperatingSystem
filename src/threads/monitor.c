#include "threads/monitor.h"
#include "threads/read_line.h"
#include "string.h"
#include "stdio.h"

void viewMonitor(){

    char input[50] = ""; // initialize input buffer

    while(true){ // terminates only with exit

        printf("ICS143A> "); // print intial prompt
        
        read_line(input, 50); // get user input

        if(strcmp(input, "exit") == 0){ 
            break;
        }
        else if(strcmp(input, "whoami") == 0){
            printf("Leonardo Cebrero\n"); // print name
        }
        else{
            printf("invalid command\n");
        }
    }
}