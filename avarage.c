#include<stdio.h>
  int main(){
    int a , b ;
    printf("Enter A :");
    scanf("%d", &a);
    printf("Enter B :");
    scanf("%d", &b);
    int avg= add(a,b);
    printf("%d", avg);
    return 0;
  }
// here add is a function 
// if we using char instead of int so return is write as return 'a'
  int add(int x , int y ){
    return (x+y)/2;
  }
