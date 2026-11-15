#include <stdio.h>
 struct Train
    {
        int id;
        int capacity;
        int passengers;
        int available_seats;
    };
/**
 * display_header - Prints the Sydney Trains heading
 */
 void display_header(void)
 {
    printf("=== SYDNEY TRAINS ===\n");
 }
 /**
  * display_train - Displays information about one train
  * @train: The train to display
  */
 void display_train(struct Train train)
 {
    printf("Train ID: %d\n", train.id);
    printf("Capacity: %d\n", train.capacity);
    printf("Passengers: %d\n", train.passengers);
    printf("Available seats: %d\n", train.available_seats);
 }

 /**
  * update_passengers - Updates the total count of passengers on train
  * @train: Pointer to the train being updated
  * @change: Number of passengers boarding or leaving
  */
 void update_passengers(struct Train *train, int change)
 {
    train->passengers += change;
    train->available_seats = train->capacity - train->passengers;
    
 }
 /**
 * main - Creating a Train system
 * Return: Always 0 (Success)
 */
 int main(void)
 {
    int i;
    int choice = 1;
    int train_id = 0;
    int boarding = 0;
    int leaving = 0;
   
    struct Train trains[2];

        trains[0].id = 101;
        trains[0].capacity = 900;
        trains[0].passengers = 350;
        
    trains[0].available_seats = trains[0].capacity - trains[0].passengers;
    
    trains[1].id = 102;
    trains[1].capacity = 900;
    trains[1].passengers = 620;

    trains[1].available_seats = trains[1].capacity - trains[1].passengers;
    
    update_passengers(&trains[0], 50);
    update_passengers(&trains[1], -120);
     
    while (choice != 0)
    {

    display_header();
   
    printf("1. Display All Trains\n");
    printf("2. Board Passengers\n");
    printf("3. Remove Passengers\n");
    printf("0. Exit\n");
    printf("\n");
    printf("Enter your choice \n");
    scanf("%d", &choice);

    if (choice == 1)
    {
       for (i = 0; i < 2; i++)
        {
        printf("\n");
       display_train(trains[i]);
        } 
    }
    if (choice == 2)
    {
        printf ("Enter Train ID: \n");
        scanf("%d", &train_id);
        for (i = 0; i < 2; i++)
        {
            if (trains[i].id == train_id)
            {
                printf("Train found!\n");
                printf("Enter passengers boarding: \n");
                scanf("%d", &boarding);

                if (boarding <= 0)
                {
                    printf("Error: Invalid passenger count\n");
                }
                else if (boarding > trains[i].available_seats)
                {
                    printf("Error: Not enough available seats!\n");
                }
                else 
                {
                    printf("Boarding allowed!\n");
                    update_passengers(&trains[i], boarding);
                }
                
                break;
            }
        }
    }

    if (choice == 3)
    {
        printf("Enter Train ID: \n");
        scanf("%d", &train_id);

        for (i = 0; i < 2; i++)
        {
            if (trains[i].id == train_id)
            {
                printf("Train found!\n");
                printf("Enter passengers leaving: ");
                scanf("%d", &leaving);

                if (leaving <= 0)
                {
                    printf("Error: Invalid passeger count!\n");
                }
                else if (leaving > trains[i].passengers)
                {
                    printf("Error: Not enough passengers onboard!\n");
                }
                else
                {
                    printf("Passengers can leave!\n");
                    update_passengers(&trains[i], -leaving);
                }
                break;
            }
        }
        if (i == 2)
        {
            printf("Error: Train not found!\n");
        }
    }
    }
return (0);
 }