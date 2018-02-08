#include <moca.h>

#include <stdio.h>
#include <stdlib.h>

#include <mocagendef.h>
#include <mocaerr.h>
#include <mislib.h>
#include <oslib.h>
#include <mxmllib.h>


void main(int argc, char *argv[])
{
    printf("ARGV[0]: %s\n", argv[0]);

    osSleep(10, 0);

    exit(0);
}
