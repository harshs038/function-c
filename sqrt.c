#include<stdio.h>
int main(){
   
    printf("root of the number is : %d\n", rut());
    greet();
    return 0;
}
 
int rut(){
    int a ; 
  printf("Enter a number :");
  scanf("%d", &a);
    int root = sqrt(a);  
    return root ;
}

void greet(){
    printf("Thanks , good bye.");
}