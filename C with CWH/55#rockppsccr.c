// Create Rock, Paper & Scissors Game
//  Player 1: rock
//  Player 2 (computer): scissors -->player 1 gets 1 point

// rock vs scissors - rock wins
// paper vs scissors - scissors wins
// paper vs rock - paper wins
// Write a C program to allow user to play this game three times with computer. Log the scores of computer and the player. Display the name of the winner at the end
// Notes: You have to display name of the player during the game. Take users name as an input from the user.

/*

#include<stdio.h>
#include<conio.h>
void main()
{
    char player1[10],player2[10];
    int in1,in2;
    printf("HELLO, WELCOME TO ROCK, PAPER, SCISSORS GAME\nWhat is player1's name?\n ");
    scanf("%s",&player1);
    printf("What is player2's name?\n ");
    scanf("%s",&player2);

    printf("%s and %s please follow the rules for the game\nPress 1 for stone\nPress 2 for paper\nPress 3 for scissors\n\n",player1,player2);
    printf("Now let us start the game\n");

    printf("%s is it STONE 1, PAPER 2 OR SCISSORS 3\n",player1);
    scanf("%d",&in1);
    printf("%s is it STONE 1, PAPER 2 OR SCISSORS 3\n",player2);
    scanf("%d",&in2);

    if ((in1==1 && in2==1) || (in1==2 && in2==2) || (in1==3 && in2==3))
    printf("Neither %s nor %s won, it is a draw",player1,player2);

    else if ((in1==1 && in2==3) || (in1==3 && in2==2) || (in1==1 && in2==3)|| (in1==2 && in2==1) || (in1==3 && in2==2) || (in1==1 && in2==3))
    printf("Congrats %s! You won!!!!",player1);

    else if ((in1==1 && in2==2) || (in1==3 && in2==1) || (in1==1 && in2==2)|| (in1==2 && in2==3))
    printf("Congrats %s! You won!!!!",player2);


    */

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int generateRandomNumber(int n)
{
    srand(time(NULL));
    return rand() % n;
}
int main()
{
    char Player1name[50];
    int n, r;
    printf("WELCOME TO OUR GAME ROCK,PAPER AND SCISSORS\n");
    printf("Player1name:");
    scanf("%s", Player1name);
    printf("Player2name:computer\n");

    printf("\nEnter 0 to choose rock,\nEnter 1 for paper\nEnter 2 for scissors\n");
    /*
    rock vs scissors=rock         0 vs 2 =0
    paper vs scissors=scissors      1 vs 2=2
    paper vs rock=paper           1 vs 0=1
    */
    static int p = 0;

    static int c = 0;
    for (int i = 1; i <= 3; i++)
    {
        printf("\nPLAY GAME %d TIME\n", i);
        printf("\n%s's turn:", Player1name);
        scanf("%d", &n);
        r = generateRandomNumber(3);
        printf("Computer's turn:%d\n", r);

        if (n == 0 && r == 2)
        {
            p++;
            printf("%s :%d\n", Player1name, p);
            printf("computer:%d\n", c);
        }
        else if (n == 2 && r == 0)
        {
            c++;
            printf("%s :%d\n", Player1name, p);
            printf("computer:%d\n", c);
        }
        else if (n == 1 && r == 2)
        {
            c++;
            printf("%s :%d\n", Player1name);
            printf("computer:%d\n", c);
        }
        else if (n == 2 && r == 1)
        {
            p++;
            printf("%s :%d\n", Player1name, p);
            printf("computer:%d\n", c);
        }

        if (n == 1 && r == 0)
        {
            p++;
            printf("%s :%d\n", Player1name, p);
            printf("computer:%d\n", c);
        }
        else if (n == 0 && r == 1)
        {
            c++;
            printf("%s :%d\n", Player1name, p);
            printf("computer:%d\n", c);
        }

        else if (n == r)
        {
            printf("draw\n");
            printf("%s :%d\n", Player1name, p);
            printf("computer:%d\n", c);
        }
    }
    if (p > c)
    {
        printf("you won!\n");
    }
    else if (p == c)
    {
        printf("match is draw ! sorry play again\n");
    }

    else
    {
        printf("computer won!\n");
    }
    return 0;
}