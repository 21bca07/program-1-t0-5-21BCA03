/* programme to print palindrome no */
#include<stdio.h>
#include<conio.h>
void main()
{
    int no,i=0,v.n;
    clrscr();
    printf("\n enter no:");
    scanf("%d",&no);
    n=no;
    while(no!=0)
    {
	v=no%10;
	i=i*10+v;
	no=no/10;
    }
    if(n==i)
      printf("\n %d is palindrome no");
    else
      printf("\n %d is not palindrome no");
    getch();
}
