#include<stdio.h>
int main()
{
    int answer ;;
    int score =0;

    printf("1.Who is the prime minister of India ?\n");
    printf("1.Draupdi Murmu 2.Narendra Modi 3.Yogi adityanath\n");
    scanf("%d" , &answer);

    if(answer==2)
    score++;

    printf("2.The value of cos90?\n");
    printf("1.1 2.0 3.-1\n");
    scanf("%d" , &answer);

    if(answer==1)
    score++;

    printf("1.C language developed by ?\n");
    printf("1.james 2.Dennis Ritchie 3.Thomson\n");
    scanf("%d" , &answer);

    if(answer==2)
    score++;

    printf("\n Final score :%d/3\n" , score);

    return 0;
} 