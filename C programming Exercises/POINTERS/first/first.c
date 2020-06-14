#include<stdio.h>


int main(){
	int myInt = 25;
	printf("myInt is: %d \n", myInt);

	int* pMyInt = &myInt;
	printf("myInt is: %x \n", pMyInt);

	// changing the value of myInt through a pointer pMyInt
	*pMyInt = 52;
	printf("myInt is now: %d \n", myInt);
	printf("value pMyInt points to is: %d \n", *pMyInt);
}

