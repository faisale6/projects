#include <stdio.h>
/**
 * main - Creating a Train system
 * display_header - Prints the Sydney Trains heading
 * Return: Always 0 (Success)
 */

 void display_header(void)
 {
    printf("=== SYDNEY TRAINS ===\n");
 }
 int main(void)
 {
    int i;
    struct Train
    {
        int id;
        int capacity;
        int passengers;
        int available_seats;
    };

    struct Train trains[2];

        trains[0].id = 101;
        trains[0].capacity = 900;
        trains[0].passengers = 350;
        
    trains[0].available_seats = trains[0].capacity - trains[0].passengers;
    
    trains[1].id = 102;
    trains[1].capacity = 900;
    trains[1].passengers = 620;

    trains[1].available_seats = trains[1].capacity - trains[1].passengers;
    display_header();
    for (i = 0; i < 2; i++)
    {
        printf("\n");
        printf("Train ID: %d\n", trains[i].id);
        printf("Capacity: %d\n", trains[i].capacity);
        printf("Passengers: %d\n", trains[i].passengers);
        printf("Available seats: %d\n", trains[i].available_seats);
    }
return (0);
 }