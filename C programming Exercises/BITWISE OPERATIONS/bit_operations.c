#include<stdio.h>
#include <string.h>

char* breakString(char str[]){
	char * token = strtok(str, "x");
	// printf("%s\n", token);
	return token;
}

int main(){
	char x[] = "0x100";
	char* token = breakString(x);



	while( token != NULL ) {
		int ret = strncmp(token, "0", 1);
		if (ret <= 0){
		   	printf( "%s\n", token ); //printing each token
		    token = strtok(NULL, "x");
		}
   	}
	return 0;
}