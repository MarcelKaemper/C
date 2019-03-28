#include <stdio.h>
#include <stdlib.h>

int main(){

		char text[8] = "Text";	
		char que[8] = {'\0'};

		scanf("%s", &que);

		float step = 100.0/sizeof(que);
		float acc = 0;


		for(int i = 0; i<sizeof(text); i++){
			if(que[i] == text[i]){
				acc += step;
			}			
		}

		printf("You searched for: %s\nAccuracy: %.0f%\n", que, acc);

		return 0;

}
