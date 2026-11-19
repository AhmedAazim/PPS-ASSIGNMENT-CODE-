#include <stdio.h>
#include <stdlib.h>

int main()
{
    FILE *source, *target;
    char sourceName[100], targetName[100];
    int ch;

    printf("Enter the name of the source file: ");
    scanf("%99s", sourceName);

    printf("Enter the name of the destination file: ");
    scanf("%99s", targetName);

    /* Open source file in read mode */
    source = fopen(sourceName, "r");
    if (source == NULL)
    {
        printf("Error: Cannot open source file '%s'\n", sourceName);
        exit(1);
    }

    /* Open destination file in write mode */
    target = fopen(targetName, "w");
    if (target == NULL)
    {
        printf("Error: Cannot create destination file '%s'\n", targetName);
        fclose(source);
        exit(1);
    }

    /* Copy character by character */
    while ((ch = fgetc(source)) != EOF)
    {
        fputc(ch, target);
    }

    printf("File copied successfully.\n");

    /* Close both files */
    fclose(source);
    fclose(target);

    return 0;
}