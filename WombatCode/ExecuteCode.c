// Includes
#include <stdio.h>
#include <kipr/wombat.h>
#include <time.h>
#include <string.h>
#include <mainFunction.h>
// Execute Code
int main() {
    
    
    
    //wait_for_light(0);
    //shut_down_in(115);
    enable_servos();
    swoopleft(1);
    sleep(1);
    clear(0,1); 
    printf("%d\n",gmpc(0));
    while (gmpc(0) <200 && gmpc(1) <200)
    {
     	motors(70,-70);   
    }
    printf("%d\n",gmpc(0));
    motors(80,80);
    sleep(1);
    ao();
    swoopright(1); //closes the claw | captures two red pom poms using the claw to turn left
    sleep(1);
    clear(0,1);
    printf("%d\n",gmpc(0));
    while (gmpc(0) <190 && gmpc(1) <190)
    {
     	motors(-70,70);   
    }
    motors(-80,-80);
    sleep(1.1);
    clear(0,1);
    while (gmpc(0) <190 && gmpc(1) <190)
    {
     	motors(-70,70);   
    }
    motors(80,80);
    sleep(1);
    swoopleft(1); 
    sleep(0.5);
    motors(-100, -100); //backs up to re-center itself
    sleep(0.7);
    motors(-70,70); // drives forward 
    clear(0,1);
    while (gmpc(0) <65 && gmpc(1) <65)
    {
     	motors(-70,70);   
    }
    printf("%d\n",gmpc(0));
    motors(80,80);
    sleep(1);
    swoopright(1);
    ao();
    msleep(1000);
    return 0;
}
