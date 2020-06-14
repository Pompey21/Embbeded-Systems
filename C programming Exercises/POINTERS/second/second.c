#include<stdio.h>


void incrementInt(int a){
		a = a + 2;
		printf("%d\n", a);
	}

void incrementIntPtr(int* a){
	*a = *a + 2;
	printf("%d\n", *a);
}


int main() {
	int myInt = 42;
	int* pMyInt = &myInt;

	printf("Value at beginning: %d\n", myInt);
	incrementInt(myInt);
	printf("Value after incrementInt: %d\n", myInt);
	incrementIntPtr(pMyInt);
	printf("Value after incrementIntPtr: %d\n", myInt);

}

// I notice that the value of myInt doesn't change after the 'incrementInt()' method is called.
// The functions prints the incremented value out but since it does not return a given value 
// it then stays the same/unchanged.