#include <stdio.h>
int main(){
    int num;
    printf("Enter a number\n");
    scanf("%d",&num);
    (num%2==0)
        ? printf("%d is even\n",num)
        : printf("%d is odd\n",num);
    return 0;
}