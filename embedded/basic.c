#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int a = 16, b = 7;

	printf("The value of (16&7): %d\n", a&b);
	printf("The value of (16|7): %d\n", a|b);
	printf("The value of (16^7): %d\n", a^b);
	printf("The value of (16 compliment): %d\n", ~a);
	printf("The value of (7 compliment): %d\n", ~b);
	printf("The value of (16>>1): %d\n", a>>1);
	printf("The value of (16>>2): %d\n", a>>2);
	printf("The value of (7>>1): %d\n", b>>1);
	printf("The value of (7>>2): %d\n", b>>2);
	printf("The value of (16<<1): %d\n", a<<1);
	printf("The value of (16<<2): %d\n", a<<2);
	printf("The value of (7<<1): %d\n", b<<1);
	printf("The value of (7<<2): %d\n", b<<2);
	return 0;
}
