#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>

int main(){
    int i;
    double j,l;
    clock_t t0,t1;
    t0 = clock();
    system("clear");
    printf("Time at start %ld \n", t0);
    printf("calculation.......\n");
    for(i=0;i<1000000000;i++){
        j= sqrt(2.0*i);
        l=1.0/j;
        l = l+j;
    }
    t1 = clock();
    printf("Time at the end %ld\n",t1); 
    printf("no of clocks %ld \n", (t1-t0));
    printf("Elasped time %ld \n", (t1-t0)/CLOCKS_PER_SEC);
    return 0;
}