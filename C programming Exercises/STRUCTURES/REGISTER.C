#include <stdio.h>

struct Register{
	int PLLEN : 8;
	int PLLCTL : 8;
	int MCUCTL : 8;
	int MCUEN : 4;
	int OCTP : 8;
};


int main(){
	struct Register test1 = {0x1, 0x1, 0x1, 0x2, 0x1};
	printf("MCUEN of the given register: %d\n", test1.MCUEN);
	test1.MCUEN = 0x1;
	printf("MCUEN of the given register: %d\n", test1.MCUEN);
	// printf("MCUEN of the given register: %d\n", test1.MCUEN);
}


// I found this article/tutorial on how to specify the size of the given variable:
// https://www.tutorialspoint.com/cprogramming/c_bit_fields.htm 
// I was unsure wehter my implementation would work but it seems that it does the job.