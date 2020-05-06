// Server side C/C++ program to demonstrate Socket programming 
#include <unistd.h> 
#include <stdio.h> 
#include <sys/socket.h> 
#include <stdlib.h> 
#include <netinet/in.h> 
#include <string.h> 
#define PORT 8080
int main(int argc, char *argv[]) 
{
    char buffer[1024] = {0};
    int new_socket,valread ;
    new_socket = atoi(argv[1]);
    char *hello = argv[2];
    valread = read( new_socket , buffer, 1024); 
    printf("%s\n",buffer ); 
    send(new_socket , hello , strlen(hello) , 0 ); 
    printf("Hello message sent\n"); 
    return 0;
} 
