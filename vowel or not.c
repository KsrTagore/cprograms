#include<stdio.h>
void main() {
    char x;
    printf("enter a character:");
    scanf("%c",&x);
    if(x=='a'||x=='e'||x=='i'||x=='o'||x=='u'||x=='A'||x=='E'||x=='I'||x=='O'||x=='U')
    {
        printf("'%c' is VOWEL",x);
    }
    else
    {
    printf("'%c' is NOT VOWEL",x);
}
}
