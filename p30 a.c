#include <stdio.h>

int main()
{
    FILE *p;
    char word[20];
    int index = 0;
    char ch;

    p = fopen("Demo.txt", "r");

    if (p == NULL)
    {
        printf("Error: Could not open file Demo.txt\n");
        return 1;
    }
    else
    {
        printf("Reversed Notes:\n");


        while ((ch = getc(p)) != EOF)
        {
            if (ch == ' ' || ch == '\n')
            {

                for (int i = index - 1; i >= 0; i--)
                {
                    putc(word[i], stdout);
                }
                putc(' ', stdout);
                index = 0;
            }
            else
            {
                word[index++] = ch;
            }
        }


        {
            for (int i = index - 1; i >= 0; i--)
            {
                putc(word[i], stdout);
            }
        }

        putc('\n', stdout);
        fclose(p);

        return 0;
    }
}

