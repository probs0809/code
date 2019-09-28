#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>

int main(){
    int i;
    double j,l;
    time_t t0,t1;
    t0 = time(NULL);
    system("clear");
    printf("Time at start %ld \n", t0);
    printf("calculation.......\n");
    for(i=0;i<1000000000;i++){
        j= sqrt(2.0*i);
        l=1.0/j;
        l = l+j;

    }
    
    t1 = time(NULL);
    printf("Time at the end %ld\n",t1); 
    printf("Elasped time %ld \n", (t1-t0));
    return 0;
}