

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void main(){
	printf("hi");
	int bound = 60;
	int score = 0;
	int myInt;
	int rando;
	char command[13];

	// highly useful spaced rep that is forgotten when you quit.
	int probabiltotal = bound;
	int probabilitrons[bound];
	for (int i = 0; i<bound; i++) probabilitrons[i]=1;
    srand(time(0));
	while(1){
		rando = rand()%probabiltotal;
		for(int i = 0; i<bound; i++){
			rando-=probabilitrons[i];
			if (rando <= 0){
				rando = i;
				break;
			}
		}

		sprintf(command, "./beepboop %d", rando);
		system(command);
		printf("score: %d; wut'd it say?\n",score);
		scanf("%d", &myInt);
		if (myInt == rando){
			score++;
			printf("nice one!\n");
		}else{
			score--;
			printf("you suck, it was %d\n", rando);
			probabiltotal++;
			probabilitrons[rando]++;
		}
	}
}
