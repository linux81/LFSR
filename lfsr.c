#include <stdlib.h>
#include <stdio.h>

unsigned long int a =12518989;// 100110001101000110100 seed


int main(void){

int i;

for(i=1;i<40;i++){

a=a+((a&(1<<6))>>6)^((a&(1<<5))>>5);

a=(a<<1)&0xFFFFFF;

printf("a=%d\n",a);

}




return(0);
}
