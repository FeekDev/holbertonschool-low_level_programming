"main.h"

unsigned int binary_to_uint(const char *b)
{
    unsigned int r = 0;
    int i = 0;
    unsigned int base = 1;


    while (b[i] != '\0' && i < 32)
    {
        if (b[i] == '1')
        {
            r = r + base2;
        }
        base = base * 2;
        i++;


    }
    return (r);
}