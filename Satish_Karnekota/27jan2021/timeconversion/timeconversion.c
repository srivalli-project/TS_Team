#include<stdio.h>
int main()
{
   char s[10];
   gets(s);
        
   if(s[8]=='A' && s[9]=='M')
   {
       if(s[0]=='1'&&s[1]=='2')
       {
          s[0]='0';
          s[1]='0';

       }      
   }
   else 
   {
        
        if(s[0]=='0'||s[1]!='2')
        {
           s[0]+=1;
           s[1]+=2;
        }
   }
   s[8] = '\0';
   puts(s);
}


/*

Results:


input: 
07:05:45PM

output:

19:05:45


*/

