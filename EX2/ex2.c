#include<stdio.h>

int main()
{
	double speedkmh = 0;
	double distance = 0;
        double v = 0;

	printf("Enter the  takeoff in speed (km/h): ");
	scanf("%lf", &speedkmh);

	printf("Enter the catapult distance (meters)");
	scanf("%lf", &distance);

	v = speedkmh * 1000/3600;

	double time = (2 * distance) / v;
	double acceleration = v/time;



printf("Acceleration: %.2f m/s^2\n", acceleration);
printf("Time to takeoff: %.2f seconds\n", time);

return 0;

}
