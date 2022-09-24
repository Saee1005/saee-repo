#include<stdio.h>
int main()
{
char c;
int lowercase_vowel, uppercase_vowel;

printf("enter a character");
scanf("%c",&c);
lowercase_vowel = (c == 'a'|| c =='e' ||c =='i'|| c =='o'|| c =='u');
uppercase_vowel = (c == 'A'|| c =='E' ||c =='I'||c =='O'|| c =='U');
if (lowercase_vowel || uppercase_vowel)

printf("%c is an vowel",c);

else
printf("%c is an constant",c);
return 0;










}

