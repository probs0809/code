#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<sys/socket.h>
#include<netinet/in.h>
#define PORT 8080

int main(){
        struct sockaddr_in address;
        int addrlen = sizeof(address);
        int sock;

        sock = socket(AF_INET, SOCK_STREAM, 0 );

        memset(&address, '0', addrlen);

        address.sin_family = AF_INET;
        address.sin_port = htons(PORT);

        inet_pton(AF_INET,"127.0.0.1",&address.sin_addr);

        connect(sock, (struct sockaddr*)&address, addrlen);

        while(1){
                char buffer[100] = "HELLO WORLD!";
                sleep(2);
                send(sock, buffer, strlen(buffer),0);
        }
}