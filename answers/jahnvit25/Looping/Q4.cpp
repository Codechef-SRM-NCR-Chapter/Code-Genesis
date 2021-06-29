#include <stdio.h>
int main() 
{
   int first, second, i, flag;
   printf("Enter the two numbers:\n");
   scanf("%d %d", &first, &second);
   printf("Prime numbers between the two numbers are: ",first,second);
   while (first < second)
   {
       flag = 0;

      if (first <= 1)
      {
         ++first;
         continue;
      }

      for (i = 2; i <= first / 2; ++i) 
      {
          if (first % i == 0)
          {
            flag = 1;
            break;
          }
      }

      if (flag == 0)
      printf("%d ", first);

      ++first;
   }

   return(0);
}
