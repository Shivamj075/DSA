import math
'''def BS(arr,n,x):
    l=0
    r=n-1
    while(l<=r):
        mid=(l+r)//2
        if(x==arr[mid]):
            return mid
        elif(x>arr[mid]):
            l=mid+1
        else:
            r=mid-1
    return -1'''
t=int(input())
for i in range(t):
    n,h=map(int,input().split())
    a=[int(x) for x in input().split()]
    a=sorted(a)
    cnt=0
    ma=max(a)
    li=[]
    while(cnt>h):
        for i in range(len(a)):
            c=a[i]-ma
            if(c>0):
                li.append(c)
            cnt=cnt+1
    print(li)
            
        
    
