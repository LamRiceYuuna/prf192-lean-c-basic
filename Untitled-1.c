#include <stdio.h>
int main(){
    int a, b, c, max, min;
    printf(" so a": );
    scanf("%d", a);
    printf(" so b": );
    scanf("%d", b);
    printf(" so c": );
    scanf("%d", c);
    max = min = a;
    if(b > max){
        max = b;
    }
    if(c > max){
        max = c;
    }
    printf("The biggest number is :", max);
    if(b < min){
        min = b;
    }
    if(c > min){
        min = c;
    }
    printf("The smallest number is :", min);
    return 0;
}