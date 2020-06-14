#include<stdio.h>

int main(){}

// No, the size of the pointer will alsways take the same number of bytes (and therefore bits),
// since it is storing the address and not the actual value. This means that if we have x number
// of possible addresses each pointer muct be able to store any of the given x addresses so
// therefore the size will be the same.

// In terms of pointers to different data types the pointers should be the same in
// 32-bit as well as 64-bit systems. However when comparing the pointers from a 
// 32-bit to pointers from a 64-bit system the ones in the later should be bigger 
// if the systems is addressing larger memory size at once.
