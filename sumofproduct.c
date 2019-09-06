//Problem statement: https://practice.geeksforgeeks.org/problems/sum-of-product-of-all-pairs/0
#include <stdio.h>

int main() {
	int t,i,j,k,l,n,sum,a[100];
	scanf("%d",&t);
	for(i=0;i<t;i++){
	    scanf("%d",&n);
	    for(j=0;j<n;j++)
	    scanf("%d",&a[j]);
	    sum=0;
	    for(k=0;k<n;k++){
	        for(l=k+1;l<n;l++)
	        sum=sum+(a[k]*a[l]);
	    }
	    printf("%d\n",sum);
	    
	}
	return 0;
}
