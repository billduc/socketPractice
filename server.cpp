#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/socket.h>
#include <netinet/in.h>

void error (const char * msg){
	perror(sgm);
	exit(1);
}


int main( int argc, char **argv[]){
	int sockfd, newsockfd, protno;
	socklen_t clilen;
	char buffer[256];

	struct sockaddr_in serv_addr, cli_addr;
	int n;
	if (argc < 2){
		fprintf(stderr, "ERROR, no port provided\n");
		exit(1);
	}	
	
	//create a socket
	//socket(int domain, int type, int protocol);
	sockfd = socket(AF_INET, SOCKET_STREAM, 0);
	if (sockfd < 0){
	error("ERROR opening socket");
	
	//clear address structure
	bzero( (char *) &serv; _addr, sizeof(serv_addr));
	
	return 0;
}
