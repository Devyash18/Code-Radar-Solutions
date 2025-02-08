#include <stdio.h>
int main(){
char a ;
scanf("%c",&a);
if (a>='A'&& a<='Z'){
    printf("Uppercase");
    break;
}
if (a>='a'&& a<='z'){
    printf("Lowercase");
    break;
}
else{
    printf("Not an alphabet");
}

}