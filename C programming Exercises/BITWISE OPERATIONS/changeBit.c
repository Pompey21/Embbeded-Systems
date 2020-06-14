#include<stdio.h>

int setBit(int value, int index){
	int changed = value | (1 << index);
	return changed;
}

int clearBit(int value, int index){
	int changed = value & ~(1 << index);
	return changed;
}

int flipBit(int value, int index){
	int changed = value ^ (1 << index);
	return changed;
}

int main(){

	// testing the 'SETBIT' method.
	int test1 = 0x100;
	printf("Value of the number before the setBit: %x\n", test1);
	int changed1 = setBit(test1, 1);
	printf("Value of the number after the setBit: %x\n\n", changed1 );

	// testing the 'CLEARBIT' method.
	int test2 = 0x116;
	printf("Value of the number before the clearBit: %x\n", test2);
	int changed2 = clearBit(test2, 1);
	printf("Value of the number after the clearBit: %x\n\n", changed2);

	// testing the 'FLIPBIT' method.
	int test3 = 0x316;
	printf("Value of the number before the flipBit: %x\n", test3);
	int changed3 = flipBit(test3, 8);
	printf("Value of the number after the flipBit: %x\n\n", changed3);
}

