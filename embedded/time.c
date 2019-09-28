#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include<math.h>

int main(){
    time_t t1,t0;

    t0 = time(NULL);

    printf("Time at the begining of the program: %ld \n",t0);
    
    for(int i=0;i<=1000000000;i++){
        double j = 1.0/sqrt((63.14)*i) + 2.0;
    }
    
    t1 = time(NULL);
    printf("Time at the end of the program: %ld \n",t1);
    printf("time elapsed %ld \n",t1-t0);
}