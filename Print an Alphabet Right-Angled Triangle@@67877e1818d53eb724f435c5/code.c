#include <stdio.h>
int main (){
    int a ;
    scanf("%d",&a);
    for (char i = 'A';i<=a;i++){
        for (char j ='A';j<=i;j++){
            printf("%c",j);
        }
        printf("\n");
    }
}