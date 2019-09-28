#include <stdio.h>
extern char* hello();
extern char* world();

int main(){
	printf("%s %s", hello(), world());
	return 0;
}