#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "color.h"
char command[30];
char nick[30];
void main(){
		printf("%s@shell~$ ",nick);
		fgets(command, 30, stdin);
		command[strlen(command)-1]='\0';

	if(strlen(command)==0 || strcmp(command," ")==0){
		shell();}
	
	else if(strcmp(command,"help")==0){
		printf("<38ma> To get out from the shell type quit.\n");
		shell();}
		
	else if(strcmp(command,"quit")==0){
		return;}
		
	else {
		system(command);
		shell();}
}
