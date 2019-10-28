#include<iostream.h>
#include<conio.h>
#include<stdlib.h>
void main()
{ system("cls");
char ch;
cout<<"please press any key"<<endl;
cin>>ch;
if(ch>='A'&& ch<='Z'||ch>='a' && ch<='z')
cout<<"entered key is an alphabet "<<"i.e "<<ch<<endl;
else
if(ch>='0'&& ch<='9')
cout<<"entered key is a digit i.e "<<ch<<endl;
else
cout<<"its a special key"<<endl;
getch();}