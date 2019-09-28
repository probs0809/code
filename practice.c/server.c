#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<sys/socket.h>
#include<netinet/in.h>
#define PORT 8080

int main(){
    struct sockaddr_in address;
    int addrlen = sizeof(address), sock, conn;

    sock = socket(AF_INET, SOCK_STREAM, 0);

    address.sin_family = AF_INET;
    address.sin_addr.s_addr = INADDR_ANY;
    address.sin_port = htons(PORT);

    bind(sock, (struct sockaddr*)&address, addrlen);
    listen(sock, 3);
    conn = accept(sock, (struct sockaddr*)&address, (socklen_t*)&addrlen);

    while(1){
        char buffer[100] = {0};
        char input[100] = {0};
        read(conn, input, 100);
        printf("\n%s\n", input);
        send(conn, input, strlen(input), 0);
    }
    return 0;
}