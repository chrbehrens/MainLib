#include <stdio.h>
#include "lib.h"

int main(int argc, char *argv[])
{
    printf("this is in the master branch!\n");
    printf("a new feature add2Integer(2,3): %d\n", add2Integer(2,3));
    printf("Bugfix 1");
    printf("   ...one more feature\n");
    printf("   ...und ein letztes feature");    
    printf("   ...nun aber wirklich das letztes feature");  
    return 0;
}