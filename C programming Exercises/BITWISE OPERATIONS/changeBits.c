#include<stdio.h>

int setBits(int value, int mask){
	int result = value | mask;
	return result;
}

int clearBits(int value, int mask){
	int result = value & ~mask;
	return result;
}

int flipBits(int value, int mask){
	int result = value ^ mask;
	return result;
}

int main(){

	// testing the 'SETBITS' method
	int value1 = 0x100;
	int mask1 = 0x101;
	int result1 = setBits(value1, mask1);
	printf("Taking value: %x and mask: %x, we get: %x\n\n", value1, mask1, result1);

	// testing the 'CLEARBITS' method
	int value2 = 0x116;
	int mask2 = 0x022;
	int result2 = clearBits(value2, mask2);
	printf("Taking value: %x and mask: %x, we get: %x\n\n", value2, mask2, result2);

	// testing the 'FLIPBITS' method
	int value3 = 0x316;
	int mask3 = 0x111;
	int result3 = clearBits(value3, mask3);
	printf("Taking value: %x and mask: %x, we get: %x\n\n", value3, mask3, result3);
}
