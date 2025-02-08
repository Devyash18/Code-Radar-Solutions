#include <stdio.h>
int main (){
    float a , b;
    char sign ;
    scanf("%d %d %c",&a,&b,&sign);
    if(sign=='+'){
        printf("%d",a+b);
    }
    if (sign=='-'){
        printf("%d",a-b);
    }
    if (sign=='*' ){
        printf("%d",a*b);
    }
    if (sign=='/'){
        printf("%d",a/b);
    }
}