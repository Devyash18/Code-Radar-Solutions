#include <stdio.h>
int main (){
    int a;
    char b;
    b='*';
    scanf("%d",&a);
    for (int i = a;i>=1;i--){
        printf("%d",i*'*'');
    }
}