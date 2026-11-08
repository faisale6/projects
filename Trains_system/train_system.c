#include <stdio.h>
/**
 * main - Creating a Train system
 * 
 * Return: Always 0 (Success)
 */

 int main(void)
 {
    struct Train
    {
        int id;
        int capacity;
        int passengers;
        int available_seats;
    };

    struct Train train1;

        train1.id = 101;
        train1.capacity = 900;
        train1.passengers = 350;
        
    train1.available_seats = train1.capacity - train1.passengers;
    printf("=== SYDNEY TRAINS ===\n");
    printf ("\n");
    printf ("Train ID: %d\n", train1.id);
    printf ("Capacity: %d\n", train1.capacity);
    printf ("Passengers: %d\n", train1.passengers);
    printf ("Available Seats: %d\n", train1.available_seats);

    
    
return (0);
 }