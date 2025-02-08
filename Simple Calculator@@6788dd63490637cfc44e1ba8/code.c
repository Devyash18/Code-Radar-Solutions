#include <stdio.h>
int main (){
    int a , b, result ;
    char sign ;
    scanf("%d  %d %c",&a,%b,&sign);
    if(sign=='+'){
        result = a+b;
        printf("%d",result);
    }
    else if (sign=='-'){
        result = a-b;
        printf("%d",result);
    }
    else if (sign == '*' ){
        result = a*b ;
        printf("%d",result);
    }
    else if (sign == '/'){
        result = a/b;
        printf("%d",result);
    }
}