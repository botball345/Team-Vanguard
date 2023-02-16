 #include <stdio.h>
 #include <kipr/wombat.h>

 int main() {
   while (1 == 1) {
     if (analog(1) > 3000) //on black 
     {
       motor(0, 0);
       motor(3, 100);

     } else // on white 
     {
       motor(0, 100);
       motor(3, 0);
     }
   }
   return 0;
 }
