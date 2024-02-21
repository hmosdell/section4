#include <cs50.h>
#include <stdint.h>
#include <stdio.h>

int main(int argc, string argv[])
{
    // Check for usage
    if (argc != 2)
    {
        printf("Improper usage.\n");
        return 1;
    }

    // Open file (filename should be 'pdf')
    // TODO

    // Create buffer for file
    uint8_t buffer[4];

    // Create array of signature bytes
    uint8_t signature[] = {0x25, 0x50, 0x44, 0x46};

    // Read first 4 bytes from file, then close.
    //TODO

    // Check if read operation was successful
    if (ferror(pdf))
    {
        printf("Error reading from file.\n");
        fclose(pdf);
        return 1;
    }

    fclose(pdf);

    // Check buffer against signature, print "likely a PDF" if true
    // TODO
    
}
