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
    if (analog(1)>2000)
    {
      drive (100,0);
    }
    else 
    {
      drive (0,100);
    }
  }
}
