#include <stdio.h>
#define TOLL_RATE 50

void processVehicle(char vehicleType[])
{
    static int totalVehicles = 0;
    static int totalRevenue = 0;

    totalVehicles++;
    totalRevenue = totalRevenue + TOLL_RATE;

    printf("\nVehicle Type: %s", vehicleType);
    printf("\nToll Charged: %d PKR", TOLL_RATE);

    printf("\nTotal Vehicles: %d", totalVehicles);
    printf("\nTotal Revenue: %d PKR\n", totalRevenue);
}

int main()
{
    processVehicle("Car");
    processVehicle("Bus");
    processVehicle("Truck");
    processVehicle("Car");

    return 0;
}
