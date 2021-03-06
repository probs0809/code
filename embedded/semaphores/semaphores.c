#include<stdio.h>
#include<unistd.h>
#include<stdlib.h>
#include<string.h>
#include<ctype.h>
#include<pthread.h>
#include<semaphore.h>

#define BUFFER_SIZE 1024

sem_t sem;

char buffer[BUFFER_SIZE];

void *read_thread(void *arg) {
	while(strncmp("stop",buffer,4) != 0){
		printf("Enter text: ");
		fgets(buffer, BUFFER_SIZE, stdin);
		sem_post(&sem);
		sleep(3);
	}
	pthread_exit("read_thread exit successful");
}

void *convert_thread() {
	int i;
	sem_wait(&sem);
	while(strncmp("stop", buffer, 4) != 0) {
		sleep(3);
		printf("Converted text: ");
		for(i=0;i<strlen(buffer);i++){
            printf("%c",toupper(buffer[i]));
			sleep(2);
        }
			
	sem_wait(&sem);
	}
	pthread_exit("convert_thread exit successful");
}


int main()
{
	int result;
	pthread_t rthread,cthread;
	void *thread_result;

	sem_init(&sem, 0, 1);  

	// if(result != 0){
	// 	printf("Semaphore initialization failed");
	// 	exit(1);
	// }

	printf("Enter text, the program will convert it into upper case, To stop enter 'stop'\n");
	
	result = pthread_create(&cthread, NULL, convert_thread, NULL);
	if(result != 0){
		printf("convert_thread creation failed");
		exit(1);
	}

	result = pthread_create(&rthread, NULL, read_thread, NULL);
	if(result != 0){
		printf("read_thread creation failed");
		exit(1);
	}

	result = pthread_join(rthread, &thread_result);
	if(result != 0){
		printf("read_thread join failed");
		exit(1);
	}
	printf("read_thread joined, %s\n",thread_result);

	result = pthread_join(cthread, &thread_result);
	if(result != 0){
		printf("convert_thread join failed");
		exit(1);
	}
	printf("convert_thread joined, %s\n",thread_result);
	
	//sem_destroy(&sem);
	exit(0);
}



