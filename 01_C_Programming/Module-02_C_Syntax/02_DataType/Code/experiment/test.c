#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int global_var = 100;
static int static_var = 200;

void my_function(void)
{
	printf("Function address : %p\n", (void *)my_function);
}

int main(void)
{
	int local_var = 10;
	int *heap_var = malloc(sizeof(int));

	if (heap_var == NULL)
	{
		return 1;
	}

	*heap_var = 50;

	printf("=== Virtual Address Space Experiment ===\n\n");
	printf("Code (function)   : %p\n", (void *)my_function);
	printf("Global variable   : %p\n", (void *)&global_var);
	printf("Static variable   : %p\n", (void *)&static_var);
	printf("Heap variable     : %p\n", (void *)heap_var);
	printf("Stack variable    : %p\n", (void *)&local_var);
	sleep(60);
	free(heap_var);

	return 0;
}