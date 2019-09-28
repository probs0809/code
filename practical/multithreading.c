#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<pthread.h>
#include<ctype.h>
#include<string.h>
#include<semaphore.h>

#define BUFFER_SIZE 1024

sem_t sem;

char buffer[BUFFER_SIZE];

void *read_thread(void *arg){
    while(strncmp("stop",buffer,4)!=0){
        printf("\nEnter Text: ");
        fgets(buffer,BUFFER_SIZE,stdin);
        //sleep(2);
        sem_post(&sem);
    }
    pthread_exit("\nread_thread exit successful.\n");
}

void *convert_thread(){
    int i;
    sem_wait(&sem);
    while(strncmp("stop", buffer, 4)!=0){
        sleep(3);
        printf("\n converted text: ");
        for(i = 0; i< strlen(buffer);i++){
            printf("%c", toupper(buffer[i]));
        }
        sem_wait(&sem);
    }
    pthread_exit("\n Convert_thread exit successful \n");
}

int main(){
    int result;
    pthread_t rthread, cthread;
    void *thread_result;

    result = sem_init(&sem, 0, 0);

    printf("\n Enter text the program will convert it into uppercase , To stop enter \"Stop\"");

    result = pthread_create(&rthread, NULL, read_thread, NULL);
    if(result != 0){
        printf("\n Read_thread creation failed\n");
        exit(1);
    }

    result = pthread_create(&cthread, NULL, convert_thread, NULL);
    if (result != 0 ) {
        printf("\nconvert_thread creation failed.\n");
        exit(1);
    }

    result = pthread_join(rthread, &thread_result);
    if (result != 0) {
        printf("read_thread join failed");
        exit(1);
    }
    printf("\n read_thread joined, %s \n", thread_result);

    result = pthread_join(cthread, &thread_result);
    if(result != 0){
        printf("\nconvert_thread join failed \n");
        exit(1);
    }
    printf("convert thread joined , %s \n", thread_result);
    sem_destroy(&sem);

    exit(0);
    
    
}