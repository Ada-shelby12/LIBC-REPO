

 // Program To Implement Towers of Hannoi Using Recursion in C

 #include<conio.h>
 #include<stdio.h>

 int count=0;
 void toh( int n, char A ,char B, char C)
 {
   if(n==1)
   printf("\nMove the Disk from %c to %c", A,C);

   else
   {
   count ++;
   toh(n-1,A,C,B);
   toh(n-1,A,B,C);
   toh(n-1,B,A,C);
   }
   }

   void main()
   {
   int n;
   clrscr();
   printf("\n Enter the Disks:");
   scanf("%d",&n);

    toh(n,'A','B','C');
    printf("\n The No. f disks are %d",count);

    getch();
    }