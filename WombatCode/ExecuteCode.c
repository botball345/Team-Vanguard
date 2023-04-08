// Includes
#include <stdio.h>
#include <kipr/wombat.h>
#include <time.h>
#include <string.h>
#include <mainFunctions.h>
// Execute Code
int main()
{
    // wait_for_light(0);
    shut_down_in(119);

    // -- Setup

    enable_servos(); // Turns on the Servos
    swoopleft(1); // Make's sure the servo is in the right position.
    sleep(1); // Waits a bit before moving on
    clear(0, 1); // Clears Motor Position Counter
    closeswoop(0);
    
    motors(20,20);
    sleep(0.15);
	ao();
    sleep(1);
    // -- Collection of First Two Green Poms (100 Points)
    printf("%d\n", gmpc(0)); // Sends out the current GMPC.
    while (gmpc(0) < 200 && gmpc(1) < 200)
    {
        motors(70, -70); // Turns left for a certain distance.
    }
    printf("%d\n", gmpc(0)); // Sends out the current GMPC.
    motors(80, 80);
    sleep(1);
    ao(); // Stops motors completely before next action.
    swoopright(1);
    sleep(1);


    // -- Collection of Second Two Red Poms (200 Points)

    clear(0, 1);
    printf("%d\n", gmpc(0));
    
    
    while (gmpc(0) < 160 && gmpc(1) < 160)
    {
        motors(-60, 60); // This time, turns right. Re-adjusts the position to look straight.
    }
    motors(-82, -82); // Backing up..
    sleep(1);
    clear(0, 1);
    while (gmpc(0) < 190 && gmpc(1) < 190)
    {
        motors(-70, 70); // Once again, right.
    }
    motors(80, 80);
    sleep(1);
    swoopleft(1);


    // -- Collection of Third Two Green Poms (300 Points)

    sleep(0.5); // Waits from swooping the red poms.
    motors(-100, -100);	//backs up to re-center itself
    sleep(0.7);
    motors(-70, 70);	// drives forward 
    clear(0, 1);

    while (gmpc(0) < 70 && gmpc(1) < 70)
    {
        motors(-70, 70); 
    }

    printf("%d\n", gmpc(0));
    motors(80, 80);
    sleep(1.7);
    ao(); // Stops all motors.
    swoopleft(1);
	
    motors(-35,-35);
    sleep(0.5);
    motors(-27,25); //swings to align with the 4 pompoms
    sleep(0.060);
    swoopright(1); //swings to the red pompom side to prevent any from rolling out during centering
    closeswoop(1);
    motors(25, 30); //slowly comes to the pompoms 
    sleep(2.1); //NEEDS to test out timing issues here!
    ao();

    closeswoop(0); //pinches the green pompom on top
    sleep(1);
    swoopleft(1); //swoops the remaining red pompoms to the left
    sleep(1);
    closeswoop(1);

    motors(65, 60); //drives forward
    sleep (0.65);
    ao(); //shuts off the motors | Preparing to pinch, swipe, and collect pompoms again

    motors(25, 35); //driving forward to another set of 4 pompoms (3 green pompoms and 1 red on top)
    sleep(0.85); 
    motors (20,20); //slows down in front of the 4 pompoms
    sleep (2.3);
    ao();
    
    closeswoop (0); // pinches the red pompom on top
    sleep (2);

    swoopright(1); //slides the green pompoms to the right side 
    sleep (1);
    closeswoop (1); //opens to release the red pompom
    sleep (0.5);
    motors (100,100); 
    sleep (1);
    swoopleft(1);
    motors(45,-40); //swings to align with the black line
    closeswoop(0);
    
    sleep (2.3);

	motors(80,57);
    sleep(4.2);
    motors(-80,-80);
    sleep(3);
    motors (100,0);
    sleep (1.25);
    motors (80,80);
    sleep (0.25);
    
    swoopright(1);
    sleep(1);
    motors(-80,-80);
    sleep(2);
    
    // closeswoop(0); = Close
    // closeswoop(1); = Open
    return 0;
}
