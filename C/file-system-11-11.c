#include <stdio.h>

void main()
{

    FILE *file;

    char data[200];

    file = fopen("data2.txt", "a");

    // Modes
    // r => read
    // w => write
    // a => append

    // r+ => read + write
    // w+ => write + read
    // a+ => read + append

    // Read data from file

    // fscanf(file, "%s", data);

    // fgets(data, 200, file);

    // Write data to file

    // fprintf(file, "This is new data written in file");

    // fputs("This is latest text written using fgets", file);

    // Append data to file

    fputs("\nThis is latest text appended using fgets", file);

    // printf("%s", data);

    fclose(file);
}