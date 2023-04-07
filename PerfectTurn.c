void turn(int tangle)
{
    set_create_total_angle(0);

    if (tangle < 0) // Right
    {
        while(get_create_total_angle() > tangle)
        {
            create_drive_direct(100, -100);
            printf("%d\n", get_create_total_angle());
        }
    }
    else
    {
        while(get_create_total_angle() < tangle)
        {
            create_drive_direct(-100, 100);
        }  
    }
}
