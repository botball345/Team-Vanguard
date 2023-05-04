int motor_one = 0;
int motor_two = 3;

void move_motors(int velocity_motor_one, int velocity_motor_two, int gmpcMotors)
{
  cmpc(motor_one);
  cmpc(motor_two);

  int gmpc_motor_one = gmpcMotors;
  int gmpc_motor_two = gmpcMotors;

  if (velocity_motor_one < 0)
  {
    gmpc_motor_one = -gmpc_motor_one *15.3;
    printf("%d\n", gmpc_motor_one);

    while (gmpc(motor_one) > gmpc_motor_one)
    {
      motor(motor_one, velocity_motor_one);
      motor(motor_two, velocity_motor_two);
    }
  }

  if (velocity_motor_two < 0)
  {
    gmpc_motor_two = -gmpc_motor_two *15.3;
    printf("%d\n", gmpc_motor_two);

    while (gmpc(motor_two) > gmpc_motor_two)
    {
      motor(motor_one, velocity_motor_one);
      motor(motor_two, velocity_motor_two);
    }
  }

  if (velocity_motor_one > 0 && velocity_motor_one > 0)
  {
    motor(motor_one, velocity_motor_one);
    motor(motor_two, velocity_motor_two);
  }

  ao();
}

bool sensor_on_black(int sensor_port)
{
  if (analog(sensor_port) > 2000) // > 2000 = black
  {
    return true;
  }
  else
  {
    return false;
  }
}

void sleep(double time)
{
    msleep(time *1000);   
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

