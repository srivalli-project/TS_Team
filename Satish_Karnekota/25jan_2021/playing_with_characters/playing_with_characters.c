#include<stdio.h>
int main()
{
   char c,s[50],sen[100];
   scanf("%c",&c);
   scanf("%s\n",&s);
   scanf("%[^\n]s",&sen);  /// use rejicts([^\n]) this scans the string up to new line.
   printf("%c",c);
   printf("\n%s",s);
   printf("\n%s",sen);
}
