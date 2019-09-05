//Goldbach's Conjecture
//Writing an even Number as a sum of two prime numbers

#include <stdio.h>
int isprime(int a){
    int i,c=1;
    if(a==1)
     c=0;
    if((a%2)==0 && (a!=2))
    c=0;
    for(i=3;i*i<=a;i=i+2){
        if(a%i==0){
        c=0;
        }
    }
    return c;
}
int main() {
	int t,i,j,k,list[70];
	scanf("%d",&t);
	for(j=0;j<t;j++)
	scanf("%d",&list[j]);
	for(i=0;i<t;i++){
	        for(k=3;k<=list[i];k=k+2){
	            if(isprime(k) && isprime((list[i]-k))){
	            printf("%d %d",k,(list[i]-k));
	            break;
	            }
	        }
	    printf("\n");
	}
	
	return 0;
}
