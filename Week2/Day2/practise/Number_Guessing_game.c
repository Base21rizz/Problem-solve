#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main()
{
    const int MIN = 1;
    const int MAX = 100;
    int guess,guesses,answer;
    srand(time(0));
    answer=(rand()%MAX)+MIN;
    guesses=0;
    do{
        printf("Enter a guess: ");
        scanf("%d",&guess);
        if (guess>answer)
        {
            printf("Too high!\n");
        }
        else if (guess<answer)
        {
            printf("Too low\n");
        }
        else
        {
            printf("CORRECT!\n");
        }
        guesses++;
    }while(guess!=answer);
    printf("answer: %d\n",answer);
    printf("Guesses: %d\n",guesses);
    return 0;
}
