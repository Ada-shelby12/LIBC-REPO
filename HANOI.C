#include <stdio.h>
#include<conio.h>
void towers(int, char, char, char);
void main()
{
 int num;
 clrscr();
 printf("Enter the number ofDisks : ");
 scanf("%d", &num);
 printf("The sequence of moves involved in the Tower of Hanoi are :\n");
 towers(num, 'A', 'C', 'B');
 getch();
}
void towers(int num, char frompeg, char topeg, char auxpeg)
{
 // Base Condition if no of disks are
 if (num == 1)
 {
 printf("\n Move disk 1 from peg %c to peg %c", frompeg, topeg);
 return;
 }
 // Recursively calling function twice
 towers(num - 1, frompeg, auxpeg, topeg);
 printf("\n Move disk %d from peg %c to peg %c", num, frompeg, topeg);
 towers(num - 1, auxpeg, topeg, frompeg);
}