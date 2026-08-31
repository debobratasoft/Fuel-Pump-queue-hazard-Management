/*
 * Fuel Pump Queue Management System
 * Data Structure: Queue (FIFO)
 * Language: C
 */

#include <stdio.h>
#define MAX 10

int main() {
    int queue[MAX], front = 0, rear = -1;
    int choice, car, i;

    while (1) {
        printf("\n1.Add Car  2.Give Fuel  3.Display  4.Exit\n");
        printf("Enter choice: ");
        scanf("%d", &choice);

        if (choice == 1) {
            if (rear == MAX - 1)
                printf("Queue Full!\n");
            else {
                printf("Enter Car Number: ");
                scanf("%d", &car);
                queue[++rear] = car;
                printf("Car added.\n");
            }
        }
        else if (choice == 2) {
            if (front > rear)
                printf("No cars waiting!\n");
            else
                printf("Car %d got fuel.\n", queue[front++]);
        }
        else if (choice == 3) {
            if (front > rear)
                printf("Queue Empty!\n");
            else {
                printf("Waiting Cars: ");
                for (i = front; i <= rear; i++)
                    printf("%d ", queue[i]);
                printf("\n");
            }
        }
        else if (choice == 4)
            break;
        else
            printf("Invalid choice!\n");
    }
    return 0;
}