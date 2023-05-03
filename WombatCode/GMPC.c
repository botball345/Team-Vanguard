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
