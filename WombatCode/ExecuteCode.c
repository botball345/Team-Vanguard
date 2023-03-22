    // Includes
#include <stdio.h>
#include <kipr/wombat.h>
#include <time.h>
#include <string.h>
#include <mainFunction.h>
	// Execute Code
int main()
{
	//wait_for_light(0);
	//shut_down_in(115);

    // -- Setup -- \\ 

	enable_servos(); // Turns on the Servos
	swoopleft(1); // Make's sure the servo is in the right position.
	sleep(1); // Waits a bit before moving on
	clear(0, 1); // Clears Motor Position Counter

    // -- Collection of First Two Green Poms -- \\ 
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

 // ██████╗░░█████╗░██╗███╗░░██╗████████╗░██████╗██╗  ░░███╗░░░█████╗░░█████╗░
 // ██╔══██╗██╔══██╗██║████╗░██║╚══██╔══╝██╔════╝██║  ░████║░░██╔══██╗██╔══██╗
 // ██████╔╝██║░░██║██║██╔██╗██║░░░██║░░░╚█████╗░██║  ██╔██║░░██║░░██║██║░░██║ -- Point Counter, Only for looks.
 // ██╔═══╝░██║░░██║██║██║╚████║░░░██║░░░░╚═══██╗╚═╝  ╚═╝██║░░██║░░██║██║░░██║
 // ██║░░░░░╚█████╔╝██║██║░╚███║░░░██║░░░██████╔╝██╗  ███████╗╚█████╔╝╚█████╔╝
 // ╚═╝░░░░░░╚════╝░╚═╝╚═╝░░╚══╝░░░╚═╝░░░╚═════╝░╚═╝  ╚══════╝░╚════╝░░╚════╝░
    
    // -- Collection of Second Two Red Poms -- \\ 
	
	clear(0, 1);
	printf("%d\n", gmpc(0));
	while (gmpc(0) < 190 && gmpc(1) < 190)
	{
		motors(-70, 70); // This time, turns right. Readjusts the position to look straight.
	}
	motors(-80, -80); // Backing up..
	sleep(1.1);
	clear(0, 1);
	while (gmpc(0) < 190 && gmpc(1) < 190)
	{
		motors(-70, 70); // Once again, right.
	}
	motors(80, 80);
	sleep(1);
	swoopleft(1);

 // ██████╗░░█████╗░██╗███╗░░██╗████████╗░██████╗██╗  ██████╗░░█████╗░░█████╗░
 // ██╔══██╗██╔══██╗██║████╗░██║╚══██╔══╝██╔════╝██║  ╚════██╗██╔══██╗██╔══██╗
 // ██████╔╝██║░░██║██║██╔██╗██║░░░██║░░░╚█████╗░██║  ░░███╔═╝██║░░██║██║░░██║ -- Point Counter, Only for reminder and looks.
 // ██╔═══╝░██║░░██║██║██║╚████║░░░██║░░░░╚═══██╗╚═╝  ██╔══╝░░██║░░██║██║░░██║
 // ██║░░░░░╚█████╔╝██║██║░╚███║░░░██║░░░██████╔╝██╗  ███████╗╚█████╔╝╚█████╔╝
 // ╚═╝░░░░░░╚════╝░╚═╝╚═╝░░╚══╝░░░╚═╝░░░╚═════╝░╚═╝  ╚══════╝░╚════╝░░╚════╝░

    // -- Collection of Third Two Green Poms -- \\ 
	
	sleep(0.5); // Waits from swooping the red poms.
	motors(-100, -100);	//backs up to re-center itself
	sleep(0.7);
	motors(-70, 70);	// drives forward 
	clear(0, 1);
	while (gmpc(0) < 65 && gmpc(1) < 65)
	{
		motors(-70, 70); 
	}
	printf("%d\n", gmpc(0));
	motors(80, 80);
	sleep(1);
    	ao(); // Stops all motors.
	swoopright(1);
    
 // ██████╗░░█████╗░██╗███╗░░██╗████████╗░██████╗██╗  ██████╗░░█████╗░░█████╗░
 // ██╔══██╗██╔══██╗██║████╗░██║╚══██╔══╝██╔════╝██║  ╚════██╗██╔══██╗██╔══██╗
 // ██████╔╝██║░░██║██║██╔██╗██║░░░██║░░░╚█████╗░██║  ░█████╔╝██║░░██║██║░░██║ -- Point Counter, Only for reminder and looks.
 // ██╔═══╝░██║░░██║██║██║╚████║░░░██║░░░░╚═══██╗╚═╝  ░╚═══██╗██║░░██║██║░░██║
 // ██║░░░░░╚█████╔╝██║██║░╚███║░░░██║░░░██████╔╝██╗  ██████╔╝╚█████╔╝╚█████╔╝
 // ╚═╝░░░░░░╚════╝░╚═╝╚═╝░░╚══╝░░░╚═╝░░░╚═════╝░╚═╝  ╚═════╝░░╚════╝░░╚════╝░

	sleep(1); // Waits 1 second before officially stopping the code.
	return 0;
}
