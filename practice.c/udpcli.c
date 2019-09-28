#include<stdio.h>
#include<sys/types.h>
#include<sys/socket.h>
#include<netinet/in.h>
#include<string.h>

int main()
{
    int sockfd,len,len1,nc;
    struct sockaddr_in servaddr;
    struct sockaddr_in cliaddr;      
    char ch[256];

    sockfd = socket(AF_INET,SOCK_DGRAM,0);

    servaddr.sin_family=AF_INET;
    servaddr.sin_addr.s_addr=inet_addr("127.0.0.1");
    servaddr.sin_port=2002;

    len = sizeof(servaddr);

    cliaddr.sin_family=AF_INET;
    cliaddr.sin_addr.s_addr=htonl(INADDR_ANY);
    cliaddr.sin_port=htonl(0);

    len1 = sizeof(cliaddr);

    bind(sockfd,(struct sockaddr*)&cliaddr,len1);

    printf("enter the string to find its length: \n");
    fgets(ch,256,stdin);
    sendto(sockfd,ch,strlen(ch),0,(struct sockaddr*)&servaddr,len);
    bzero(ch,256);
    int n = recvfrom(sockfd,ch,256,0,(struct sockaddr*)&servaddr,(socklen_t*)&len);
    ch[n]='\0';

    printf("the length Calculated by Server is: ");
    fputs(ch,stdout);
    printf("\n");
    return  0;
}

