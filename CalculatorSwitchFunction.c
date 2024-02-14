#include <stdio.h>
int fun(int a,int b){
    return a+b;
}
int funn(int a,int b){
    return a-b;
}
int funnn(int a,int b){
    return a*b;
}
int funnnn(float a,float b){
    return a/b;
}
int main(){
    int a,b;
    char c;
    printf("enter the Num (operator) Num :");
    scanf("%d %c %d",&a,&c,&b);
    switch (c)
    {
    case '+':
        printf("%d",fun(a,b));
        break;
    case '-':
         printf("%d",funn(a,b));
         break;
    case '*':
         printf("%d",funnn(a,b));
         break;
    case '/':
         printf("%f",funnnn(a,b));
         break;
    default:
    printf("ERROR");
        break;
    }
}

