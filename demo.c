#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <signal.h>
#include <string.h>

int main(int argc, char** argv) {

    char buf[100];

    memset(buf, 0, 100);

    read(0, buf, 100);


    if(buf[0] == 'f'){
    	printf("one\n");
    	if(buf[1] == 'o'){
    		printf("two\n");
    		if(buf[2] == 'o'){
    			printf("three\n");
    			abort();
    		}
    	}

    }

    return 0;

}


