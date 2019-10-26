#include<stdio.h>
#include<string.h>
int main()
{
  char pal[20],check='y';
  int i;
  
  puts("Enter any string");
  gets(pal);
  
  for(i=0;i<strlen(pal)/2;i++)
   if(pal[i]!=pal[strlen(pal)-i])
    check='n';
  
  if(check=='y')
  puts("String is palindrome");
  else
  puts("String is not palindrome");
  return 0;
}
