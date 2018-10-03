/* this program converts each character of string into its nearest prime ascii values and then print it*/
#include<stdio.h>
int main()
{ int a[100],b[100],k=0,e=0,t,n,m,c,d;
  char ch[500],cha;
  for(int i=65;i<=90;i++)
  { int count=0;
  for(int j=2;j<=i/2;j++)
  { if(i%j==0)
      { count=1;
      break;
	  }
  }
   if(count==0)
   { a[k]=i;
       k=k+1;
	  }   
  }
  for(int i=97;i<=122;i++)
  { int count=0;
  for(int j=2;j<=i/2;j++)
  { if(i%j==0)
      { count=1;
      break;
	  }
  }
   if(count==0)
   { b[e]=i;
       e=e+1;
	  }   
  }
  printf("enter number of test cases: ");
  scanf("%d",&t);
  for(int i=0;i<t;i++)
  {  printf("enter size of strings: ");
  scanf("%d",&n);
     printf("enter the string: ");
	 scanf("%s",ch);
	 printf("string after process is: ");
     for(int j=0;j<n;j++)
     { m=ch[j];
      if(m>=65&&m<=90)
	 { if(m==89||m==90)
	     printf("Y");
	     else{
		 
	 for(int k=0;k<20;k++)
       { 
	   if(m==a[k])
         { cha=m;
            printf("%c",cha);
           break;
		 }
		 else if(a[k]>m)
		 { c=a[k]-m;
           d=m-a[k-1];
           if(d>c)
          {   cha=a[k];
		    printf("%c",cha); }
           else
          {   cha=a[k-1];
		    printf("%c",cha); } 
           break;
		 }
		 else
		 continue;
	   }
}
}
       else
       { if(m==97)
         printf("a");
         else
         {
		 
         
	 for(int k=0;k<20;k++)
       { 
	   if(m==b[k])
         { cha=m;
           printf("%c",cha);
           break;
		 }
		 else if(b[k]>m)
		 { c=b[k]-m;
           d=m-b[k-1];
           if(d>c)
          {   cha=b[k];
		    printf("%c",cha); }
           else
          {   cha=b[k-1];
		    printf("%c",cha); } 
           break;
		 }
		 else
		 continue;
	   }
       }
       	
       	
	   }
     	}
  printf("\n");
  }
  return 0;
}
