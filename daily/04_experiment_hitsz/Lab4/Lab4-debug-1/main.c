#include <stdio.h>
//#include <string.h>
#define ARRA_SIZE 80

#include <stdio.h>
#include <string.h>
#define ARRA_SIZE 80

int strcmp(const char* str1, const char* str2)
{
	while ((*str1) && (*str1 == *str2))
	{
		str1++;
		str2++;
	}


	if (*(unsigned char*)str1 > *(unsigned char*)str2)
	{
		return 1;
	}
	else if (*(unsigned char*)str1 < *(unsigned char*)str2)
	{
		return -1;
	}
	else
	{
		return 0;
	}
}

int main()
{
    int n ;
    char str[ARRA_SIZE], min[ARRA_SIZE];

    printf("Please enter 5 names:\n");
    gets(str);
    strcpy(min,str);
    for(n = 1; n < 5; n++)
    {
        gets(str);
        if(strcmp(str,min) < 0)
        {
            strcpy(min, str);
        }
    }
    printf("The min is:");
    puts(min);
}

