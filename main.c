#include <stdio.h>
#include "lib.h"

int main(int argc, char *argv[])
{
    printf("this is in the master branch!\n");
    printf("a new feature add2Integer(2,3): %d\n", add2Integer(2,3));
    printf("Bugfix 1");
    printf("   ...one more feature\n");
    printf("   ...und ein letztes feature\n");    
    printf("   ...nun aber wirklich das letztes feature\n");
    printf("new lib2\n");     
    printf("a new feature mul2Integer(3,9): %d\n", mul2Integer(3, 9)); 
    return 0;
}