#include<iostream.h>
#include<fstream.h>
#include<conio.h>

int main()
{ 
  char story[200];
  fstream fin;
  fin.open("Story.txt",ios::out|ios::in);
  
  
  cout<<"Enter your story in the diary-\n press any key to continue:-";
  getch();
  clrscr();
  
  cin.getline(story,sizeof(story),"end");
  fin<<story<<endl;
  

  fin.close();
return0;
}
