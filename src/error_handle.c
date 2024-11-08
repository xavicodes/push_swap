//#include "push_swap.h"
#include <unistd.h>

void check_ifnumber(char **argv)
{
    int i = 1;
    int t;

    while (argv[i])
    {
        t = 0;
        while (argv[i][t])
        {
            if (argv[i][t] < '0' || argv[i][t] > '9' || argv[i][t] != '-' || argv[i][t] != '+')
            {
                write(1, "Error: Can't have characters\n", 29);
                exit;
            }
            t++;
        }
        i++;
    }
}

int main(int argc, char **argv)
{
    

    check_ifnumber(argv);
}

