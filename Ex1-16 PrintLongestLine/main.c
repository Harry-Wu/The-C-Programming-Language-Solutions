#include <stdio.h>
#include <stdlib.h>

#define MAXSIZE 1000  //max input line size, bytes

int getline(char line[], int maxsize);  //get chars from a line, store them to line[]
void copyline(char to[], char from[]); //copy one line from one to another

/* print longest input line */
int main()
{
    int len;  //current line length
    int max;  //max length
    char line[MAXSIZE];  //current line
    char longest[MAXSIZE];  //longest line

    max = 0;
    printf("Please input:\n");
    while((len = getline(line, MAXSIZE)) > 0)
    {
        if(len > max)
        {
            max = len;
            copyline(longest, line);
        }
    }
    if(max > 0)
        printf("The longest line is:%s", longest);
    return 0;
}

int getline(char line[], int maxsize)
{
    int c, i;
    for (i = 0; i < maxsize - 1 && (c = getchar()) != EOF && c != '\n'; i++) //line size not exceeds maxsize, line not finished
        line[i] = c;
    if (c == '\n')  //when line goes to end
    {
        line[i] = c;
        i++;
    }
    line[i] == '\0';  //add null character at the end of the character array
    return i;  //return line length
}

void copyline(char to[], char from[])
{
    int i = 0;
    while ((to[i] = from[i]) != '\0')
        i++;
}
