#include <stdlib.h>
#include "towers.h"
#include <stdio.h>
int main(int argc, char **argv)
{
	int n = 3;
    int from = 1;
    int dest = 2;
	if (argc == 4){
		n = atoi (argv[1]);
		from = atoi (argv[2]);
		dest = atoi (argv[3]);
	}else if (argc == 2) {
        n = atoi(argv[1]);
    }
	if (argc >4 || n <1 || from <1 || dest <1){
		fprintf(stderr, "%d %d %d\n", n, from, dest);
		fprintf(stderr, "Invalid argument(s)\n");
		exit (1);
	}else{
    	towers(n, from, dest);
   		exit(0);
	}
}

