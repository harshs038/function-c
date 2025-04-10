#include<stdio.h>
 int n ,r ,  facc =1 , facc1 = 1 , facc2 = 1 ;
int main(){
    printf("Enter a number : ") ;
    scanf("%d" , &n) ;
    printf("Enter a number : ") ;
    scanf("%d" , &r) ;
 
     int ans = facc / (facc1 * facc2) ;
    printf("Combination : %d\n", ans) ;
    return 0 ;
}

int fac(){
   
    for(int i=1 ; i<=n ; i++){
        facc = facc * i ;
    }
    printf("Factorial : %d\n", facc) ;
    return facc ;
}
int fac1(){
   
    for(int i=1 ; i<=r ; i++){
        facc1 = facc1 * i ;
    }
    printf("Factorial : %d\n", facc1) ;
    return facc1 ;
}

int fac2(){
       
    for(int i=1 ; i<=n-r ; i++){
        facc2 = facc2 * i ;
    }
    printf("Factorial : %d\n", facc2) ;
    return facc2 ;
}