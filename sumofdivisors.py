#Finding sum of Divisors for each number from  1 to x for a given x.
#input=> Ist line: no of cases t then t inputs 
x=input()
x=int(x)
l=[]
for m in range(0,x):
    c=input()
    l.append(int(c))
for a in l:
    sum=0
    for i in range(1,a+1):
        count=0
        for j in range(1,i+1):
            if i%j == 0:
                count = count + 1
        sum=sum+count
    print(sum)
