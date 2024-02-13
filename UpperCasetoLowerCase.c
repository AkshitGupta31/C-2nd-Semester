#include <stdio.h>
int main(){
    // we have to convert upper case to lower case
    char a;
    printf("Enter the character: ");
    scanf("%c",&a);
    char lc;
    if(a>=65 && a<=90){
        lc = a+32;
    }
    printf("Lower case character is : %c",lc);
}
