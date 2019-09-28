#include<stdio.h>
#include<time.h>
#include<stdlib.h>
#include<math.h>

int main(){
    clock_t t0,t1;
    t0 = clock();

    printf("The time at the starting of the code %ld\n",t0);

    for(int i=0;i<=100000000;i++){
        double j = 1.0/sqrt(2.0*i)+1;
        
    }

    t1 = clock();
    printf("The time at the end of the code %ld\n",t1);
    printf("The elapsed time is %ld\n",(t1-t0)/CLOCKS_PER_SEC);
    
}
