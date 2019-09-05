#include <stdio.h>

int main() {
	int t,i,j,k,a,sum,m,count,l[100000];
	scanf("%d",&t);
	//for(k=0;k<t;k++)
//	scanf("%d",&l[k]);
	for(i=0;i<t;i++){
	    scanf("%d",&l[i]);
	    a=l[i];
	    sum=0;
	    for(j=1;j<=a;j++){
	        count=0;
	        for(m=1;m<=j;m++){
	            if(j%m == 0)
	            count++;
	        }
	        sum=sum + count;
	    }
	    
	    printf("%d\n",sum);
	}
	
	
	return 0;
}
