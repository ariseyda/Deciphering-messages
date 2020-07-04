#include<stdio.h>
#include<math.h>

//Given the mapping a = 1, b = 2, ... z = 26, and an encoded message, count the number of ways it can be decoded.
//For example, the message '111' would give 3, since it could be decoded as 'aaa', 'ka', and 'ak'.
//You can assume that the messages are decodable. For example, '001' is not allowed.

int main(){
	
	int n,digit=0,i=0,j;
	printf("Enter a number:");
	scanf("%d",&n);
	int a=n;
	while(n>0){
		n=n/10;
		digit++;
	}
    printf("\nDigits:%d",digit);     
	int array[digit];
    int b=digit-1;
    while(a>0){
    	array[b]=a%10;
    	a=a/10;
    	b--;
	}
	     int m;
	     for(m=0;m<digit;m++){
	     	printf("\nArrays:%d ",array[m]);
		 }
	int k,count=0;
	for(k=0;k<digit-1;k++){
		if(array[k]<3 && array[k+1]<7){
			count++;
		}	
	}
	if(count!=0){
		printf("\nWays:%d",count+1);
	}
	else{
		printf("\nWays:%d",1);
	}
	
		
	
	return 0;
}

 



