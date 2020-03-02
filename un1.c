#include<stdio.h>

int main(){
    int t,i,j,k,n,q,c,num;
    scanf("%d",&t);
    while(t--){
        q=1;
        c=0;
        scanf("%d",&n);
        for(i=2;i>0;i++){
            num=i;
            while(num%5==0)
            num=num/5;
            while(num%2==0)
            num=num/2;
            while(num%3==0)
            num=num/3;
            if(num==1)
            q++;
            if(q==n)
            {printf("%d\n",i);break;}
        }
    }
    return 0;
}
