#include<stdio.h>
#include<conio.h>

int marks=0;
char sol;

void q1()
	{clrscr();
		printf("\t1.Who has been appointed as the new chairman of Central Board of Indirect taxes and Custom (CBIC)?\n");
		printf("a. John Joseph\tb.Vananja N. Sarna\nc.Mahender Singh\td.S Ramesh\n");

		scanf("%c",&sol);
		if(sol=='d')
			{marks+=5;printf("correct");}
		else
			{printf("incorrect, d is correct");marks-=3;}

		printf("\nPress Enter to continue");
		getch();clrscr();

	}



void q2()
	{clrscr();
		printf("\t2.Who has been appointed as the new chairman of Central Board of Indirect taxes and Custom (CBIC)?\n");
		printf("a. Nittoor Srinavasa Raucommittee\tb.Tejendra Mohan Bhaisin Committee\nc.KV Chowdary Committee\td.K Santhanam\n");

		scanf("%c",&sol);
		if(sol=='d')
			{marks+=5;printf("correct");}
		else
			{printf("incorrect, d is correct");marks-=3;}
		printf("\nPress Enter to continue");
		getch();clrscr();

	}

void q3()
	{clrscr();
		printf("\t3.India's first-ever national police museum will establish in which city?\n");
		printf("a. Chennai\tb.Delhi\nc.Nagpur\td.Kolkata\n");

		scanf("%c",&sol);
		if(sol=='b')
			{marks+=5;printf("correct");}
		else
			{printf("incorrect, b is correct");marks-=3;}
		printf("\nPress Enter to continue");
		getch();
		clrscr();

	}

void q4()
	{clrscr();
		printf("\t4.Pappu Karki, a popular folk singer belonged to which native state?\n");
		printf("a. Jammu & Kashmir\tb.Himachal Pradesh\nc.Uttarakhand\td.Assam\n");

		scanf("%c",&sol);
		if(sol=='c')
			{marks+=5;printf("correct");}
		else
			{printf("incorrect, c is correct");marks-=3;}
		puts("Press Enter to continue");
		getch();
		clrscr();
	}

void q5()
	{clrscr();
		printf("\t5.Who is appointed as the acting Chairman of UPSC\n");
		printf("a. Arvind Saxena\tb.Sudha Jain\nc.Kiriti Kumar\td.Omi Agrawal");

		scanf("%c",&sol);
		if(sol=='a')
			{marks+=5;printf("correct");}
		else
			{printf("incorrect, a is correct");marks-=3;}
		printf("\nPress Enter to continue");
		getch();
        clrscr();
	}




int main()
{

	char name[20];


	clrscr();
	printf("\t\t\t\tWelcome to quiz competition");
	printf("\n\t\t\t\tPlease enter your name-");
	gets(name);

	printf("\n\t\t\t\t\t\tPress any key to continue...");
	getch();
	clrscr();

	q1();q2();q3();q4();q5();

	printf("Your score=%d",marks);
	printf("\n Thanks %s for playing",name);

return 0;
}
