#include <stdio.h>

#define SIZE 4

int board[SIZE][SIZE];
int score = 0;

void moveUp()
{
    printf("UP\n");

    /* 2048 UP logic will come here */
}

void moveDown()
{
    printf("DOWN\n");

    /* 2048 DOWN logic will come here */
}

void moveLeft()
{
    printf("LEFT\n");

    /* 2048 LEFT logic will come here */
}

void moveRight()
{
    printf("RIGHT\n");

    /* 2048 RIGHT logic will come here */
}

int main()
{
    char key;

    printf("2048 Game\n");
    printf("W = UP\n");
    printf("S = DOWN\n");
    printf("A = LEFT\n");
    printf("D = RIGHT\n");

    while (1)
    {
        scanf(" %c", &key);

        if (key == 'w' || key == 'W')
        {
            moveUp();
        }
        else if (key == 's' || key == 'S')
        {
            moveDown();
        }
        else if (key == 'a' || key == 'A')
        {
            moveLeft();
        }
        else if (key == 'd' || key == 'D')
        {
            moveRight();
        }
    }

    return 0;
}