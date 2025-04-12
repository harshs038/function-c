#include<stdio.h>
int main(){
   int a = 5 ;
   int* x = &a;  // here int* x is a pointer to store a address of a 
    printf("%d", *x); 
    return  0 ;
}