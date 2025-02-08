#include <stdio.h>
int main(){
    int a,b,c,greatest;
    scanf("%d %d %d",&a,&b,&c);
    // let greatest = a
    greatest = a;
    if (greatest <b){
        greatest=b;}
    if (greatest < c){
        greatest = c;
    }

    printf("%d",greatest);

    }