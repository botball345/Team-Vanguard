#include <kipr/wombat.h>
#include <functions.h>

int main()
{
    create_connect();
    printf("Start");
    enable_servos();
    disable_servos(3);

   

    wait_for_milliseconds(1000);

    movegmpc(170, 300, 300);

    turn(90);
    printf("%d\n", get_create_total_angle());
 
    movegmpc(170, 300, 300);
    movebump();

    create_drive_direct(-150, -150);
    sleep(1.2);


    turn(23);
    create_drive_direct(0,0);

    servo(2,400,0);
    servo(0,50,1);
    servo(1,2047,1); 
    servo(2,2047,0); 
    wait_for_milliseconds(2000);
    servo(1,353,2); 
    servo(0,1424,2);                
    servo(2,1101,0); 


    //driving to second cube//
    servo(0,550,1);
    servo(1,500,1);
    
      motor(1,100);
      msleep(3100);

    wait_for_milliseconds(1000); 

   ao();
     motor(1,-185);
     msleep(3300);
    ao();
    
     //driving to second cube//
    turn(-125);
    printf("%d\n", get_create_total_angle());
   
    movegmpc(400, 200, 200);
  
  turn(105);
    printf("%d\n", get_create_total_angle());
  movebump();
    
    turn(10);
    
     //grabbing second cube
     
  
     create_drive_direct(-100, -100);
  
   servo(1,2047,1.5);
  
   
    create_drive_direct(0,0);
    msleep(1000);
    create_drive_direct(0,0);
    msleep(1000);
     movegmpc(55, 100, 100);
    turn(11);
    create_drive_direct(0,0);
    msleep(1000);
    servo(2,2013,0);
    servo(0,859,1);
      servo(1,197,2); 
      
    servo(0,1071,2);                
    servo(2,1346,0); 
    servo(1,796,1);
    motor(1,100);
    msleep(2700);
     ao();
     motor(1,-100);
     msleep(2800);
    ao();
     motor(1,100);
    msleep(2800);
     ao();
     motor(1,-100);
     msleep(2800);
    ao();
    create_drive_direct(0,0);
    msleep(1000);
    
    
    //driving to botgal
  create_drive_direct(-100,-100);
    msleep(600);
    turn(-105);
    
    movegmpc(320, 120, 120);
    turn(90);
    movebump();
   
      create_drive_direct(-100,-100);
    msleep(280);
    turn(-20);
     create_drive_direct(0,0);
    msleep(1000);
    
    //grabing botgal
    servo(1,2047,1.5);
    servo(0,604,1.5);
      servo(2,2047,0);
    servo(1,1249,1.5);
   //putting botgal in box
    create_drive_direct(-100,-100);
    msleep(1000);
    turn(180);

    movegmpc(160,100,100);
    
    return 0;
}
