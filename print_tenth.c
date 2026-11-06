#include <stdio.h>
void Print_Tenth();

int main()
{
Print_Tenth();
return 0;
}

void Print_Tenth()
{
  for(int i=10; i<52; i++)
  {
    if ((i%10)==0)
    {
      printf("Index %d: Every 10th iteration.\n", i);
    }
    if ((i%10)==1)
    {
      printf("Index %d: Following the 10th iteration.\n", i);
    }
  }
}