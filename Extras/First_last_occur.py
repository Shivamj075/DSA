def first(arr,l,r,x,n):
    if(l<=r):
        mid=(l+r)//2
        if((mid==0 or x>arr[mid-1]) and arr[mid]==x):
            return mid
        elif(x>arr[mid]):
            return first(arr,mid+1,r,x,n)
        else:
            return first(arr,l,mid-1,x,n)
    return -1
def last(arr,l,r,x,n):
    if(l<=r):
        mid=(l+r)//2
        if((mid==n-1 or x<arr[mid+1]) and arr[mid]==x):
            return mid
        elif(x>arr[mid]):
            return last(arr,mid+1,r,x,n)
        else:
            return last(arr,l,mid-1,x,n)
    return -1
li=[5,7,7,8,8,10]
n=len(li)
x=8
a=first(li,0,n-1,x,n)
b=last(li,0,n-1,x,n)
print("First_occur",a)
print("Last_occur",b)
print("Frequency of target_value",b-a+1)
