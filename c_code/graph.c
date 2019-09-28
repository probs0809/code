#include<stdio.h>

int main(int argc,char *argv[]){
    int i,j,x[100]={5,2,10},y[100]={5,3,10}, maximumx,maximumy,location = 1,l=0;
    

    maximumx = x[0];
 
    for (int c = 1; c <= sizeof(x)/sizeof(int); c++)
    {
        if (x[c] > maximumx)
        {
        maximumx = x[c];
        location = c+1;
        }
    }

    location = 1;
    maximumy = y[0];
    for (int c = 1; c <= sizeof(y)/sizeof(int); c++)
    {
        if (x[c] > maximumy)
        {
        maximumy = y[c];
        location = c+1;
        }
    }
    char arrey[200][200];
    for(i=0;i<=maximumy;i++){
        for(j=0;j<=maximumx;j++){
            if (i==maximumy) {
                arrey[i][j] = j+48;
                //printf("  %d", j);
            }else if (j==0) {
                arrey[i][j] = (maximumy-i)+48;
                //printf("  %d", maximumy-i);
            }
            else{
                arrey[i][j] = ' ';
                //printf("   ");
            }   
        }    
        //printf("\n");
    }
    for( i = 0; i < sizeof(x)/sizeof(int); i++)
    {
        
        arrey[maximumx-y[i]][x[i]] = '0';
    }
    

    for(i=0;i<=maximumy;i++){
            for(j=0;j<=maximumx;j++){
                printf("   %c",arrey[i][j]);
            }
            printf("\n");
        }

}

//(i==x[j] && j==y[j])