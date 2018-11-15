#include<stdio.h>
void roman(int);
int main()
{ int n;
  printf("enter any number");
  scanf("%d",&n);
  roman(n); 
return 0;
}
void roman(int n)
  { int m,d,c,l,x,v,i;
   m=n/1000;
   d=(n%1000)/500;
   c=(n%500)/100;
   l=(n%100)/50;
   x=(n%50)/10;
   v=(n%10)/5;
   i=(n%5)/1;
   for(int k=1;k<=m+d+c+l+x+v+i;k++)
    { if(k<=m)
      printf("M");
      else if(k>m&&k<=m+d)
      printf("D");
      else if(k>m+d&&k<=m+d+c)
      printf("C");
      else if(k>m+d+c&&k<=m+d+c+l)
      printf("L");
      else if(k>m+d+c+l&&k<=m+d+c+l+x)
      printf("X");
      else if(k>m+d+c+l+x&&k<=m+d+c+l+x+v)
      printf("V");
      else if(k>m+d+c+l+x+v&&k<=m+d+c+l+x+v+i)
      printf("I");
	}
  }
