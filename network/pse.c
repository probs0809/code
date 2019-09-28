#include<stdio.h>
#include<stdlib.h>
#include<sys/socket.h>
#include<netinet/in.h>
#include<string.h>
#define PORT 8080

int main(){
    struct sockaddr_in address;
    int server_fd, new_socket, valueread, opt = 1, addrlen = sizeof(address);
    char text[100] = "HELLO WORLD";

    server_fd = socket(AF_INET, SOCK_STREAM, 0);

    address.sin_family = AF_INET;
    address.sin_addr.s_addr = INADDR_ANY;
    address.sin_port = htons(PORT);

    bind(server_fd, (struct sockaddr *)&address, sizeof(address));
    listen(server_fd, 3);
    new_socket = accept(server_fd, (struct sockaddr*)&address, (socklen_t*)&addrlen);
    while(1){
        char buffer[100] = {0};
        valueread = read(new_socket, buffer , 100);
        printf("%s",buffer);
        send(new_socket, text , strlen(text), 0);
    }
}