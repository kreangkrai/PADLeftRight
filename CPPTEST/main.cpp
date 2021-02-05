#include <stdio.h> 
#include <stdlib.h> 
#include <string.h>


void padLeft(int length, char c, char str[255])
{
    int size = strlen(str);
    char cc[255];
    int k = 0;
    if (length > size)
    {
        for (int i = 0; i < length; i++)
        {
            if (i < length- size)
            {
                cc[i] = c;
            }
            else
            {
                cc[i] = str[k];
                k++;
            }
        }
    }
    else
    {
        for (int i = 0; i < size; i++)
        {
            cc[i] = str[i];
        }
    }
    for (int i = 0; i < length; i++)
    {
        printf("%c", cc[i]);
    }
}

void padRight(int length, char c, char str[255])
{
    int size = strlen(str);
    char cc[255];
    int k = 0;
    if (length > size)
    {
        for (int i = 0; i < length; i++)
        {
            if (i > size-1)
            {
                cc[i] = c;
            }
            else
            {
                cc[i] = str[i];
              
            }
        }
    }
    else
    {
        for (int i = 0; i < size; i++)
        {
            cc[i] = str[i];
        }
        
    }

    for (int i = 0; i < length; i++)
    {
        printf("%c", cc[i]);
    }
}
int main()
{
    char c[] = "12";

    padLeft(20, '0', c);
    printf("\n");
    padRight(4, '0', c);
    return 0;
}