#include<stdio.h>
#include<math.h>
#include<string.h>
#include<stdlib.h>
void printList(int,char*);
char* reverse(int,char*);

void printList(int n,char* l){
    for(int i=0;i<n;i++){
        printf("%c",l[i]);
    }
    printf("\n");
}

char* reverse(int n,char* l){
    char* a = (char*) calloc(n,1);
    for(int i=0;i<n;i++){  
        a[i]=l[n-1-i];
    }
    return a;
}