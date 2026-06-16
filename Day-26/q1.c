#include<stdio.h>
int main()
{
    int secret=100;
    int guess;

    do
    {
        printf("Guess the number :");
    scanf("%d" , &guess);
    
        if(guess>secret)
        {
            printf("High\n");
        }
        else if(guess<secret)
        {
            printf("Low\n");
        }
        else
        {
            printf("Correct guess");
        }


    } while (guess!=secret);

    return 0;
    
    
}