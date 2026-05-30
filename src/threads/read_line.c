#include "threads/read_line.h"
#include "devices/input.h"
#include "stdio.h"

int read_line(char* buffer, int size){ // return number of chars read

    int c; // hold input char

    int i = 0; // index tracker

    while(i < size - 1){ // get input char while buffer is not full

        c = input_getc(); // get input char

        if(c == '\n' || c == '\r'){ // newline case
            printf("\n");
            break;
        }
        else if(c == '\b' && i > 0){ // if backspace and buffer is not empty
            --i; // decrement index
            printf("\b \b"); // echo deletion
            continue;
        }
        
        buffer[i++] = c; // add char to buffer and increment i
        printf("%c", c); // echo char back to user
    }

    buffer[i] = '\0'; // null terminate char array

    return i;

}
