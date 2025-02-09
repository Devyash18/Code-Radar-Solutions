#include <stdio.h>
int main (){
    int a ;
    scanf("%d",&a);
    for (char i = 'A';i<=a;i++){
        for (char j =1;j<=i;j++){
            printf("%c",j);
        }
        printf("\n");
    }
}