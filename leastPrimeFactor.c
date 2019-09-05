/*
Given a number N, print least prime factors for all numbers from 1 to N.  The least prime factor of an integer N is the smallest prime number that divides it. The least prime factor of all even numbers is 2. A prime number is its own least prime factor (as well as its own greatest prime factor).  Note : 1 needs to be printed for 1.

Input: N = 6
Output: 1 2 3 2 5 2
The first line of input contains an integer T denoting the number of test cases.
The first line of each test case is N.*/

#include <stdio.h>
int isprime(int a){
    int i,c=1;
    if(a==1)
    c=0;
    else if(a==2)
    c= 1;
    else{
        for(i=3;i*i<=a;i++){
            if(a%i==0 && a!=i)
            c==0;
        }
    }
    return c;
}
int main() {
	int i,j,tests,k,m;
	int n[200];
	scanf("%d",&tests);
	for(k=0;k<tests;k++){
	    scanf("%d",&n[k]);
	}
for(m=0;m<tests;m++){
	for(i=1;i<=n[m];i++){
	    if(i==1)
	    printf("%d\t",1);
	    else if(i%2==0){
	        printf("%d\t",2);
	    }
	    else{
	    for(j=3;j<=i;j=j+2){
	        if(i%j==0 && isprime(j)){
	            printf("%d\t",j);
	            break;
	        }
	    }
	}
	}
	printf("\n");
}
return 0;
}
