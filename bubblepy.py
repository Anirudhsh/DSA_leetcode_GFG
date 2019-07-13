def bubsort(a):
    n = len(a)
    for i in range(n):
        for j in range(n-i-1):
            if a[j]>a[j+1]:
                a[j],a[j+1]=a[j+1],a[j]
    print(a)


n=int(input("Enter Lenth Of Array"))
a=[]
for i in range(n):
    x=int(input("enter element " + str(i)+":- "))
    a.append(x)
  
bubsort(a)
