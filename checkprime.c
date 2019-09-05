#include <stdio.h>

int isprime(int a){
    int i,c=1;
    if(a==1)
    c=0;
    else if(((a%2)==0) && (a!=2))
    c=0;
    else{
        for(i=3;i*i<=a;i=i+2){
            if(a%i==0){
                c=0;
                break;
            }
        }
    }
    return c;
    
}
int main() {
	int list[100],i;
	int tests,j;
	scanf("%d",&tests);
	for(j=0;j<tests;j++)
	scanf("%d",&list[j]);
	for(i=0;i<tests;i++){
	    if(isprime(list[i]))
	    printf("Yes");
	    else
	    printf("No");
	printf("\n");  
	}
	return 0;
}
