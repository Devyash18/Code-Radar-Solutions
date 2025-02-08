#include <stdio.h>
int main(){
    int a,b,greatest;
    scanf("%d %d",&a,&b);
    // let greatest = a
    greatest = a;
    if (b>a){
        greatest=b;
    }
    printf("%d",greatest);

    }