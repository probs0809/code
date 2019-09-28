
#include<stdio.h>
#include<sys/types.h>
#include<sys/socket.h>
#include<netinet/in.h>
#include<string.h>

int 
main()
{

	int	serv_sockfd, client3_sockfd;
	int	serv_len, cli_len;
	struct sockaddr_in serv_address;
	struct sockaddr_in cli_address;
	
    serv_sockfd = socket(AF_INET, SOCK_DGRAM, 0);
	
    //bzero((char *)&serv_address, sizeof(serv_address));

	serv_address.sin_family = AF_INET;
	serv_address.sin_port = 2002;
	serv_len = sizeof(serv_address);

	bind(serv_sockfd, (struct sockaddr *)&serv_address, serv_len);

	while (1) {
		char str[256];
		int	l = 0, h = 1, j;
		cli_len = sizeof(cli_address);
		printf("\n server is ready \n");
		int	n = recvfrom(serv_sockfd, str, sizeof(str), 0, (struct sockaddr*)&cli_address, (socklen_t *) & cli_len);
		sendto(serv_sockfd, str, strlen(str), 0, (struct sockaddr *)&cli_address, cli_len);
	}
}
