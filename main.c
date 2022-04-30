#include <stdio.h>
#include <stdlib.h>
#include <string.h>
char user_input[30];
void mainloop(){
	printf("username@cxc# ");
	//scanf("%s" , user_input);
			fgets(user_input, 30, stdin);
		user_input[strlen(user_input)-1]='\0';
	if(strcmp(user_input,"exit")==0)
		exit(0);

	else if(strlen(user_input)==0)
		mainloop();
	
	else {
		system(user_input);
		mainloop();
	}
}

void main(){
//printf("\033[31m");
printf("cyberXcode shell v0.1 type cxc-help\n");
	mainloop();
}
