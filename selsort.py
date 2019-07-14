def selsort(a):
    n = len(a)
    for i in range(n-1):
        min = i
        for j in range(i+1,n):
            if a[j]<a[min]:
                min = j
        a[i],a[min] = a[min],a[i]
    print(a)


n=int(input("Enter Lenth Of Array"))
a=[]
for i in range(n):
    x=int(input("enter element " + str(i)+":- "))
    a.append(x)
  
selsort(a)
