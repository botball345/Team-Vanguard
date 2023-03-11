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