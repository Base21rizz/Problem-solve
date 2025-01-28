#include<stdio.h>
#include<ctype.h>
int main()
{
    char questions[][100]={
        "1. What is my name?: ",
        "2. Who is my father?: ",
        "3. What is my ethnicity?: "
    };
    char options[][100]= {
        "A. Lemar B. Godwyn C. Larry D. Bob",
        "A. Mernt B. Qopr C. Cooper D. George",
        "A. Indian B. Chinese C. Italian D. American"
    };
    char answers[3] = {'B','A','B'};

    int numberofquestions = sizeof(questions)/sizeof(questions[0]);
    char guess;
    int score=0;

    printf("QUIZ GAME!");
    for (int i = 0; i < 3; ++i)
    {
        printf("%s \n",questions[i]);
        printf("%s \n",options[i]);

        printf("Guess: ");
        scanf(" %c",&guess);
        guess=toupper(guess);

        if (guess==answers[i])
        {
            printf("CORRECT!\n");
            score++;
        }
        else
        {
            printf("WRONG!\n");
        }
    }
    printf("FINAL SCORE: %d/%d\n",score,numberofquestions);
    return 0;
}