#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main(void)
{
    int random,guess,attemps =1;
    srand(time(0));
    random = (rand()%100) + 1; //This generates a random number between 1 to 100.
    do
    {
        printf("Guess The Number: \n");
        scanf("%d", &guess);
        if(guess<random)
            printf("Higher Number Please! \n");
        else if(guess>random)
            printf("Lower Number Please! \n");
        else
            printf("You guessed the number %d in %d attemps. \n ",random,attemps);
        attemps++;
    }while(guess!=random);
}
