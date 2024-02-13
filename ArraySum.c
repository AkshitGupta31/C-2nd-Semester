#include <stdio.h>
int main(){
    int n,sum=0;
    printf("Enter the size of array: ");
    scanf("%d",&n);
    int arr[n];
    printf("Input Elements of Array : ");
    for(int i=0;i<n;i++)
        scanf("%d",arr[i]);
    for (int i=1;i<=n;i++){
        sum=sum+arr[i];
        }
    printf("The Sum of Elements are : %d",sum);
    return 0;
}
