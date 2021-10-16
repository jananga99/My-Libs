#include<stdio.h>
#include<stdlib.h>
#include<string.h>
char* input_line();
//Input a unknown length string line
char* input_line(){
    char* line = (char*) malloc(1);
    line[0] = '\0';
    int c=0;
    char input;
    scanf("%c",&input);
    while(input!='\n'){
        c+=1;
        line = (char*) realloc(line,c+1);
        line[c] = '\0';
        line[c-1] = input;
        scanf("%c",&input);
    }
    return line;
}