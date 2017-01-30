#include <stdio.h>

int main(){
    int n, i;
    float num[3],sum = 0 , average;

   

    for(i = 0; i < 3; ++i){
        printf("%d. Input Grade: ", i+1);
        scanf("%f", &num[i]);
        sum += num[i];
    }

    average = sum / 3;
    
    printf("Average = %.2f\n", average);
    
    if ( average >= 75 ) {                  
        printf ("passed" ); 
    }
    else  {           
        printf( "failed" );       
    }

    return 0;
}
