#include <stdio.h>
int main (){
    int a;
    char b;
    b='*';
    scanf("%d",&a);
    for (int i = a;i>=1;i--){
        for(int j = 1 ; j<=i;j++){
            printf("* ");
        }
        printf("\n");
    }
}