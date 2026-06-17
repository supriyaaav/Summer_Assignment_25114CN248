#include<stdio.h>
#include<string.h>

int main()
{
    int choice , i , len;
    char str[100] ;

    printf("Enter string:");
    scanf("%s" , str);
    do
    {
        printf("\n1.LENGTH");
        printf("\n2.REVERSE");
        printf("\n3.UPPERCASE");
        printf("\n4.PALINDROME");
        printf("\n5.EXIT\n");

        printf("Enter choice :\n");
        scanf("%d" , &choice);

        switch(choice)
        {
            case 1:
            printf("Length :%d" ,strlen(str));
            break;

            case 2:
            len=strlen(str);
            for(i=len-1 ; i>=0 ; i--)
            printf("%c" , str[i]);
            break;

            case 3:
            for(i=0 ; str[i]!='\0' ; i++)
            {
                if(str[i]>='a'&&str[i]<='z')
                str[i]-=32;
            }
            printf("%s " , str);
            break;

            case 4:
            {
                int flag=1;
                len=strlen(str);
                for(i=0 ; i<len/2 ; i++)
                {
                    if(str[i]!=str[len-1-i])
                    {
                        flag=0;
                        break;
                    }
                }
                if(flag)
                printf("Palindrome");

                else
                printf("Not palindrome");

                
            }
            break;
            
            case 5:
            printf("EXIT");
            break;
        
        }
    } while (choice!=5);
    return 0;
    
}