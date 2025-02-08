#include <stdio.h>
#include<ctype.h>

int main(){
    char a ;
    scanf("%c",&a);
    else if (a=='a'|| a=='i'||a=='o'||a=='e'||a=='u'){
        printf("Vowel");
    }
    if (isdigit(a)){
        printf("Digit");
    }
    else if (a>'a'&&a<='z'){
        printf("Consonant");
    }
    else {
        printf("Special Character");
    }


}