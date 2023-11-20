#include <stdio.h>
#include <string.h>

struct map
{
    char name[20];
    int count;
};

int main()
{
    char string[200];
    printf("Enter the string: ");
    fgets(string, 200, stdin);
    char find[20];
    printf("Enter the word to find: ");
    scanf("%s", find);
    int len = strlen(string);
    struct map map[200];
    int count = 0;
    int flag = 0;
    for (int i = 0; i < len; i++)
    {
        if (string[i] == find[0])
        {
            flag = 1;
            for (int j = 0; j < strlen(find); j++)
            {
                if (string[i + j] != find[j])
                {
                    flag = 0;
                    break;
                }
            }
            if (flag == 1)
            {
                count++;
            }
        }
    }
    printf("The Frequency of %s is %d", find, count);
    return 0;
}
