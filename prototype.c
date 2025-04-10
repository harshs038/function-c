// it is use for write function below main 
#include<stdio.h>
int main(){
     void fun();  // here we add this line to prototype
     fun();
return 0;
}
void fun(){
    printf("Hello world");
}
