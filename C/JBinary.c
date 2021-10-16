#include<stdio.h>
#include<math.h>
#include<string.h>
#include<stdlib.h>
int binToDeci(char*,int);

//10010 --> 9   (index x of b reprsents 2^x)
int binToDeci(char* b,int n){
    int num=0;
    for(int i=0;i<n;i++){
        if(b[i]=='1')   num+=pow(2,i);
    }
    return num;
}