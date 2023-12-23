#include <stdio.h>

int main() {
    double distanceInKm;

    
    printf("Enter the distance between two cities (in kilometers): ");
    scanf("%lf", &distanceInKm);

    double distanceInMeters = distanceInKm * 1000;
    printf("Distance in meters: %.2f m\n", distanceInMeters);

    double distanceInFeet = distanceInKm * 3280.84;
    printf("Distance in feet: %.2f ft\n", distanceInFeet);

    double distanceInInches = distanceInKm * 39370.1;
    printf("Distance in inches: %.2f inches\n", distanceInInches);

    double distanceInCentimeters = distanceInKm * 100000;
    printf("Distance in centimeters: %.2f cm\n", distanceInCentimeters);

    return 0;
}
