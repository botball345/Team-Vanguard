// Includes
#include <stdio.h>
#include <kipr/wombat.h>
#include <time.h>
#include <string.h>
#include <mainFunction.h>

// Execute Code
int main() {
    cmpc(0);
    cmpc(1);
    while (analog(Ports[5]) < 2000)
    {
        motors(100,35);
    } // Move Left To Collect Left pom poms
    motors(100,100); // Collect Remaining
    msleep(950);
    motors(80,0);
    sleep(2);
    motors(-70,70); 
    sleep(1.3);
    motors(-80,80); // Turn Aound 
    msleep(960);
    motors(80,80);
    sleep(1.5);
    lineFollow(5.3);
    cmpc(0);
    cmpc(1);
    while (gmpc(0) < 2250 && gmpc(1) < 2250)
    {
        motors(60,-60);
    }
    lineFollow(3);
    motors(100,100);
    sleep(1.3);
    lineFollow(4.8);
    motors(60,30);
    sleep(1.4);
    return 0;
}