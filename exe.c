#include <stdio.h>
int main()
{
   int rollno;
   int Physics;
   int Chamestry;
   int Biology;
   int English;
   int Computer;

   printf("Enter rollno:");
   scanf("%d", &rollno);

   printf("Enter Physics Marks:");
   scanf("%d", &Physics);

   printf("Enter Chamestry Marks:");
   scanf("%d", &Chamestry);

   printf("Enter Biology Marks:");
   scanf("%d", &Biology);

   printf("Enter English Marks:");
   scanf("%d", &English);

   printf("Enter Computer Marks:");
   scanf("%d", &Computer);

   int total = Physics + Chamestry + Biology + English + Computer;
   float percentage = (total * 100) / 500;

   printf("your rollno is:%d,\nrollno and Your Total marks is:%d", rollno, total);
   printf("\nYour Percentage is:%.2f\n", percentage);

   if (Physics < 33 || Chamestry < 33 || Biology < 33 || English < 33 || Computer < 33 || 33 > percentage)
   {
      printf("you are fail");
   }
   else if (33 <= percentage && 60 >= percentage)
   {
      printf("your grade is c");
   }
   else if (60 <= percentage && 85 >= percentage)
   {
      printf("your grade is B");
   }
   else if (85 <= percentage && 95 >= percentage)
   {
      printf("your grade is A");
   }
   else // if (95 <= percentage && 100 >= percentage)
   {
      printf("your grade is A+");
   }

   return 0;
}