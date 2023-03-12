#include<stdio.h> 

// Paste colored_textprinter.h in your folder then Add #include "colored_textprinter.h" as a header in your main c file.
// Usage: coloredPrint("<color>", "<string>")
// Colors: 8
// No need to reset color, it is automated.

void coloredPrint(char col[], char phrase[])
{
    char black[] = "\033[0;30m";
    char red[] = "\033[0;31m";
    char green[] = "\033[0;32m";
    char yellow[] = "\033[0;33m";
    char blue[] = "\033[0;34m";
    char purple[] = "\033[0;35m";
    char cyan[] = "\033[0;36m";
    char white[] = "\033[0;37m";

    if (col == "black")
    {
        printf("%s", black);
    }
    else if (col == "red")
    {
        printf("%s", red);
    }
    else if (col == "green")
    {
        printf("%s", green);
    }
    else if (col == "yellow")
    {
        printf("%s", yellow);
    }
    else if (col == "blue")
    {
        printf("%s", blue);
    }
    else if (col == "purple")
    {
        printf("%s", purple);
    }
    else if (col == "cyan")
    {
        printf("%s", cyan);
    }
    else if (col == "white")
    {
        printf("%s", white);
    }

    printf("%s", phrase);

    printf("%s", white);
    
}