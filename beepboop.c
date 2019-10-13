

// backup option:
//	printf("\a");
// or using subprocess call to beep xp

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

void beeparoni(int mask, int num){
	if ((1<<mask)&(num)){
		system("beep -f 400");
	}else{
		system("beep -f 200");
	}
}

void main(int argc, char *argv[]){
	int koopa = atoi(argv[1]);
	//printf("%d\n%d\n", argc, koopa);
	for (int i = 7; i>=4; i--)
		beeparoni(i,koopa);
	usleep(100000);
	for (int i = 3; i>=0; i--)
		beeparoni(i,koopa);
}
