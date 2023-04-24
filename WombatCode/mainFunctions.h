int Ports[] = {
    0, // MotorLeft
    1, // MotorRight
    0, // Servo1
    0, // Servo2
    0, // Analog Sensor1 Far Left
    1, // Analog Sensor2 Middle
    2, // Analog Sensor3 Far Right
};
// Functions
void sleep(double time)
{
    msleep(time *1000);   
}

void motors(int power_left, int power_right) {
    motor(Ports[1], power_right);
    motor(Ports[0], power_left);
}

void clear(int port, int port2)
{
    cmpc(port);
    cmpc(port2);
}

void sservo(int port, int tpos, int pausetime)
{
    int cpos = get_servo_position(port);
    while (cpos != tpos)
    {
        if (cpos > tpos)
        {
            cpos--;
        }
        else
        {
            cpos++;
        }
        set_servo_position(port, cpos);
        msleep(pausetime); 
    }
}

int online(int sensor_port)
{
 	if (analog(sensor_port) > 3000)
    {
     	return 1;
    }
    else
    {
     	return 0;   
    }
}


void squish(int openclose)
{
    enable_servos();
    if (openclose == 0)
    {
        sservo(3, 650, 1);  
    }
    else
    {
        sservo(3, 1200, 1);  
    }
}


void swoopleft()
{
    enable_servos();
    set_servo_position(1, 735);
}

void swoopright()
{
    enable_servos();
    set_servo_position(1, 1400);
}

void movegmpc(int gm, int vel1, int vel2)
{
    cmpc(0);
    cmpc(1);
    
 	while (gmpc(0) < gm && gmpc(1) < gm)
    {
        motors(vel1, vel2);
    }
    ao();
}


void lineFollow(float Duration) {
    time_t endwait;
    time_t start = time(NULL);
    time_t seconds = Duration; // end loop after this time has elapsed
    endwait = start + seconds;
    while (start < endwait) {
        start = time(NULL);
        if (analog(Ports[5]) > 3500 && analog(Ports[4]) < 500 && analog(Ports[6]) < 1000) {
            motor(Ports[0], 100);
            motor(Ports[1], 100);
            msleep(150);
        }
        if (analog(Ports[5]) < 3500 && analog(Ports[4]) < 500) {
            motor(Ports[0], 100);
            motor(Ports[1], 20);
            msleep(150);
        }
        if (analog(Ports[5]) < 3500 && analog(Ports[6]) < 1000) {
            motor(Ports[0], 20);
            motor(Ports[1], 100);
            msleep(150);
        }
        if (analog(Ports[5]) < 3500 && analog(Ports[4]) < 500 && analog(Ports[6]) < 1000) {
            motors(60,30);
        }
    }
}
