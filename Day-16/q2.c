#include<stdio.h>
int main()
{
    int i ,j , a[5];
    printf("Enter element : ");

    for(i = 0 ; i<5 ; i++)
    {
        scanf("%d" , &a[i]);
    }
     
    int maxfreq = 0;
    int element ;

    for( i =0 ; i<5 ; i++)
    {
        int count = 1;
        for(j = i+1 ; j<5 ; j++)
        {
            if(a[j] == a[i])
            count ++;
        } 
        if(maxfreq < count )
        {
            maxfreq = count;
            element = a[i];
        }
    
    }
    printf("Element : %d\n", element);
    printf("Frequency : %d", maxfreq);

    return 0;

}


