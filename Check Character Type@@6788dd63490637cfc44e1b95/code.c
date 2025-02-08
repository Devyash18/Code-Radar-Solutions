#include <stdio.h>
#include<ctype.h>

int main(){
    char a ;
    scanf("%c",&a);
    if (a=='a'|| a=='i'||a=='o'||a=='e'||a=='u'){
        printf("Vowel");
    }
    else if (isdigit(a)){
        printf("Digit");
    }
    else if (a>'a'&&a<='z'){
        printf("Consonant");
    }
    else if (a=='O'){
        printf("Vowel");
    }
    else {
        printf("Special Character");
    }


}