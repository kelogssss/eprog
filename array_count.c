#include <stdio.h>

int main(){
 int i, bin[5], num = 0;
 for(i=0; i<5; i++){
 	printf("Enter number %d: ", i+1);
 	scanf("%d", &bin[i]);	
 }
 for(i=0; i<5;i++){
 	if(bin[i] == 1)
 		num++;
 }
 printf("ones: %d\n",num);
 printf("zeroes: %d\n",5-num);

 return 0;
}
