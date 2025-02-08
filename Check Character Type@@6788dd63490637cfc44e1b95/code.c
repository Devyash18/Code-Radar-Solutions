#include <stdio.h>
#include<ctype.h>

int main(){
    char a ;
    scanf("%c",&a);
    if (isdigit(a)){
        printf("Digit");
    }
    else if (isalpha(a)){
        char lower = tolower(a);
    if (a=='a'|| a=='i'||a=='o'||a=='e'||a=='u'){
        printf("Vowel");
    }else{
        printf("Consonant");
    }
    }
    
    else {
        printf("Special Character");
    }


}