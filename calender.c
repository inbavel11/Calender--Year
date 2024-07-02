#include<stdio.h>
#include<conio.h>
void calender();


int main()
{
	for(int i=1;i>0;i++)
	{
		
		int y;
		printf("\nEnter the year=");
		scanf("%d",&y);
		calender(y);
		}
		
}

void calender(int y)
{
	clrscr();
	
	char a,b,c,d,e,f,g;
	int s = 0,k;
	for (int i = 1; i < y; i++)

	{
		if (i % 400 == 0)
			s = s + 366;

		else if (i % 4 == 0 && i % 100 != 0)
			s = s + 366;
		else
			s = s + 365;
	}
	s=s+1;
	k=s/7;
	switch(k)
	{
		case 0:
		a='S',b='M',c='t',d='W',e='T',f='F',g='$';
		break;
		case 1:
		g='S',a='M',b='t',c='W',d='T',e='F',f='$';
		break;
		case 2:
		f='S',g='M',a='t',b='W',c='T',d='F',e='$';
		break;
		case 3:
		e='S',f='M',g='t',a='W',b='T',c='F',d='$';
		break;
		case 4:
		d='S',e='M',f='t',g='W',a='T',b='F',c='$';
		break;
		case 5:
		c='S',d='M',e='t',f='W',g='T',a='F',b='$';
		break;
			case 6:
		b='S',c='M',d='t',e='W',f='T',g='F',a='$';
		break;
		
		
	}
	


	printf("\n\t\tJan %d",y);
	printf("\n\t\t%c  %c  %c  %c  %c  %c  %c",a,b,c,d,e,f,g);

	printf("\n\t\t01 02 03 04 05 06 07");
	printf("\n\t\t08 09 10 11 12 13 14");
	printf("\n\t\t15 16 17 18 19 20 21");
	printf("\n\t\t22 23 24 25 26 27 28");
	printf("\n\t\t29 30 31 ");
	}
	
	