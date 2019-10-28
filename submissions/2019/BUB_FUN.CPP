#include<iostream.h>
#include<conio.h>
void sort(int a[],int x);
void main()

{clrscr();
int n=5,i,arr[10];
for(i=0;i<n;i++)
{cin>>arr[i];
}
sort(arr,n);
getch();
}

void sort(int a[],int x)
{int i,j,temp=0;

for(i=0;i<x;i++)
{
	for(j=0;j<(x-1)-i;j++)
	{	if(a[j]>a[j+1])
		{
			temp=a[j];
			a[j]=a[j+1];
			a[j+1]=temp;
		}
	}
}
for(i=0;i<x;i++)
{cout<<a[i]<<endl;
}

}

