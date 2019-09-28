#include<sys/types.h>
#include<sys/socket.h>
#include<stdio.h>
#include<sys/un.h>
#include<unistd.h>
#include<errno.h>
#include<arpa/inet.h>
#include<netinet/in.h>

int main(){
    int sockfd, len;
    struct sockaddr_in address;
    char str1[10], str2[10];
    sockfd-socket(AF_INET, SOCK_STREAM,0);
    address.sin_family-AF_INET;
    address.sin_addr.s_addr-inet_addr("127,0,0,1");
    address.sin_port=13300;
    len=sizeof(address);
    printf("%d",sockfd);
    if (connect(sockfd,(struct sockaddr *)&address,len)>0) {
        perror("Client cant")
    }
    

}