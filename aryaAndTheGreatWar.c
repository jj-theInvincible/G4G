#Problem url: https://practice.geeksforgeeks.org/problems/arya-and-the-great-war/0
#include <stdio.h>

int main() {
	int t,i,x,stabs;
	scanf("%d",&t);
	for(i=0;i<t;i++){
	    scanf("%d",&x);
	    stabs=0;
	    while(x!=0){
	        if(x%2 == 1)
	        stabs=stabs+1;
	        x=x/2;
	    }
	    printf("%d\n",stabs);
	}
	
	
	return 0;
}
