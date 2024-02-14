#include <stdio.h>
int main(){
    int a,b,c;
    printf("Enter the 3 numbers: ");
    scanf("%d %d %d",&a,&b,&c);
    if(a>b){
        if(a>c){
            printf("%d is max",a);
        }
        if(a<c){
            printf("%d is max",c);
        }
    }
    if(a<b){
        if(b>c){
            printf("%d is max",b);
        }
        if(b<c){
            printf("%d is max",c);
        }
    }
}
