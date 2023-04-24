#include <stdio.h>
#include <kipr/wombat.h>
#include <time.h>
#include <string.h>
#include <mainFunctions.h>
//squish 1 = open | squish 0 = close //ANNOUNCEMENT: Make the swoop function slower! And trim the squish claws!
int main()
{
    squish(1); //Opens the top claw
    sleep(1);

    movegmpc(10, 20, 20);
    sleep(0.5);

    motors(-50, 50);
    sleep(1.6);

    motors(80,80);
    sleep(2.350);

    swoopleft(); //Opens the red side to collect red poms

    motors(60,-50); //turns right facing toward two red poms
    sleep(1.240);

    motors(80,95); //slightly turns left to fully close on poms
    sleep(1.75);

    swoopright (); 
    sleep (0.5); //closes the red side

    motors (50,-54); //turns right to pump the green poms into scoring area (starting area)
    sleep (1.90); 

    motors(63,57); //moves forward
    sleep(1.305);

    ao();
    swoopleft(); //opens the red poms side | catches green poms
    sleep(1);

    motors (-50,50); 
    sleep (0.30);
    ao();

    motors (50,50); //lines up with black line
    sleep (1.280);
    ao();
    swoopright(); //catches red pompoms 
    sleep (1);

    motors(50,0); //turns left facing towards another 2 green pompoms
    sleep (0.50);

    motors (52,55); //drives slightly left to collect two green pompoms
    sleep (1.86);
    ao();

    swoopleft(); //collects the two green pompoms 
    sleep(1);

    motors (0,25); //centers with the stack of poms
    sleep (0.685);
    
    motors(47.5,43); //slightly drives right to avoid smashing into the poms
    sleep(2.242);

    ao();
    squish(0); //collects the top green pom
    sleep (0.250);
    swoopright(); //swips the red poms into the red side
    sleep(1.5); 
    squish(1); //lets go of the green pom
    sleep(1);

    motors(36.5,24); //slightly turns right to face 3 green poms and 1 red
    sleep(1.245);

    ao();
    sleep (0.500);

    motors (40,45); //drives forward toward the set of poms
    sleep (1.150);
    
    motors (25,26);
    sleep (0.755);

    ao();
    squish(0); //collects the top red pom
    sleep (0.250);
    swoopleft(); //swipes the green poms into the green side
    sleep(1.5); 
    squish(1); //lets go of the red pom
    sleep(1);

    motors(35,35); 
    sleep (0.51);
    swoopright(); //closes the red pom pom side

    motors (75,75); //drives forward to collect remaining pom poms leftover
    sleep (0.6);

    motors (0,80);
    sleep (4);

    motors (50,65); //leans into the left side to drop off green poms
    sleep (1.325);
    
	ao();
    squish(0);
    sleep (1);
    
    motors (80,81); //going into scoring zone
    sleep (1.750);
    
    squish (1);
    sleep (0.5);
  

    motors (-90,-90); //backups 
    sleep (3);
    
    motors (0,50); //turns right | switching to a different zone to drop off red poms
    sleep (2.325);
    
    motors (50,0);
    sleep (0.350);
    
    swoopleft(); //opens up the red pom pom side to back up
    sleep (0.250);
    
    motors (40,42);
    sleep (0.800);
    
    motors (-80,-90);
    sleep (2);
    
    


    return 0;
}
