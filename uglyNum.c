#include <stdio.h>
int isprime(int a){
    int c=1,i;
    if(a==1)
    c=0;
    if(a%2==0 && a!=2)
    c=0;
    for(i=3;i*i<(a+1);i=i+2){
        if(a%i==0)
        c=0;
    }
    return c;
}
int main() {
	int t,i,n,q,j,c;
	scanf("%d",&t);
	while(t--){
	    scanf("%d",&n);
	    q=0;
	    for(i=1;i>0;i++){
	        if(i==1)
	        q++;
	else{
	        c=0;
	        if((i%2==0) || (i%3==0) || (i%5==0)){
		c=1;
	          for(j=1;j<=i;j=j+1){
	              if(i%j==0 && isprime(j) && j!=2 && j!=3 && j!=5)
	              c=0;
	          } 
	         }}
	         if(c==1)
	         q=q+1;

	         if(q==n)
	         {printf("%d",i);break;}
	    }
	    
	}
	return 0;
}
