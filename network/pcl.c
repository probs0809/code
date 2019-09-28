#include<stdio.h>
#include<string.h>
#include<sys/socket.h>
#include<netinet/in.h>
#include<stdlib.h>
#define PORT 8080

int main(){
    struct sockaddr_in address;
    int sock = 0, valueread;
    char text[100] = "HELLO WORLD";

    sock = socket(AF_INET,SOCK_STREAM,0); // <0 socket creation fail
    memset(&address,'0',sizeof(address));

    address.sin_family = AF_INET;
    address.sin_port = htons(PORT);

    inet_pton(AF_INET, "127.0.0.1" , &address.sin_addr); //<= 0 invalid address
    connect(sock, (struct sockaddr *)&address,sizeof(address)); // < 0 connection fail

    while(1){
        char buffer[1024] = {0};
        send(sock, text, strlen(text),0);
        valueread = read(sock, buffer, 100);
        printf("%s", buffer);
    }
}