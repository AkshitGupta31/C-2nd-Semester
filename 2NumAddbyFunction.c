#include <stdio.h>
int funadd(int a,int b){
   return a + b;
}
int main(){
    int a,b;
    printf("Enter 2 number: ");
    scanf("%d %d",&a,&b);
    printf("The sum of 2 number is %d",funadd(a,b)) ;
}
