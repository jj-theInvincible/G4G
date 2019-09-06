//Problem url:https://practice.geeksforgeeks.org/problems/reverse-coding/0
#include <stdio.h>

int main() {
	int t, i,n1,n2;
	scanf("%d",&t);
	for(i=0;i<t;i++){
	    scanf("%d %d",&n1,&n2);
	    if(n1%2==0){
	        if(((n1/2)*n1 + (n1/2))==n2)
	        printf("%d\n",1);
	        else
	        printf("%d\n",0);
	        
	    }
	    else{
	        if((((n1/2)+1)*n1)==n2)
	        printf("%d\n",1);
	        else
	        printf("%d\n",0);
	    }
	}
	return 0;
}
