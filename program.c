#include <stdio.h>
#include <kipr/wombat.h>

int left = 0;
int right = 3;
void drive (int leftvelocity, int rightvelocity)
{
  motor (left, leftvelocity);
  motor (right, rightvelocity);
}
int main()
{
  while (1==1)
  {
    printf("%d\n", analog(1));
    if (analog(1)>2000)
    {
      drive (0,100);
    }
    else
    {
      drive (100,0);
    }
  }
  
}






