#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    srand(time(0));
    int player, computer = rand() % 3;
    printf("-----------------Enter 0 for rock-------------------\n");
    printf("-----------------Enter 1 for paper------------------\n");
    printf("-----------------Enter 2 for scissor----------------\n");
    printf("Enter your number: ");
    scanf("%d", &player);
    printf("Computer choice: %d\n", computer);

    if (player == 0 && computer == 0)
    {
        printf("It's a Drow!\n");
    }else 
    if (player == 0 && computer == 1)
    {
        printf("Better Luck Next Time!\n");
        printf("You Lose!\n");
    }else 
    if (player == 0 && computer == 2)
    {
        printf("Congratulations!\n");
        printf("You Won!\n");
    }else 
    if (player == 1 && computer == 0)
    {
        printf("Congratulations!\n");
        printf("You Won!\n");
    }else 
    if (player == 1 && computer == 1)
    {
        printf("It's a Drow!\n");
    }else 
    if (player == 1 && computer == 2)
    {
        printf("Better Luck Next Time!\n");
        printf("You Lose!\n");
    }else 
    if (player == 2 && computer == 0)
    {
        printf("Better Luck Next Time!\n");
        printf("You Lose!\n");
    }else 
    if (player == 2 && computer == 1)
    {
        printf("Congratulations!\n");
        printf("You Won!\n");
    }else 
    if (player == 2 && computer == 2)
    {
        printf("It's a Drow!\n");
    }else 
    

    return 0;
}
