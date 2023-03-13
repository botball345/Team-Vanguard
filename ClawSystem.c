#include <stdio.h>
#include <kipr/wombat.h>

int left = 0;
int right = 3;

int arm = 0;
int claw = 3;

int up = 100;
int down = 2000;

int open = 500; //Extends the claw outward
int close = 3000; //Closes up the claw



void type_claw (int number_claw, int velocity)
{
  set_servo_position (claw, velocity);
}
void claw_open ()
{
  set_servo_position(claw,open);
}

void sleep (double time) //The Barrier to code
{
  msleep (time*1000);
}
void drive (int leftvelocity, int rightvelocity) //Drives
{
  motor (left,leftvelocity);
  motor (right,rightvelocity);
}
int main()
{
  while (1==1)
  {
    printf ("%d\n ", analog(1));
    //Checks for mistakes
    
    if (analog(1)==128)
    {
      break;
      
    }
    
    drive (100,100);
    sleep (0.25);
  }
  
  
  return 0;
}





