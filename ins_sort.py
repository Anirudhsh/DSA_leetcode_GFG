def insSort(a):
    l=len(a)
    for i in range(1,l):
        key = a[i]
        j = i-1
        while j>=0 and key<a[j]:
            a[j+1] = a[j]
            j-=1
        a[j+1] = key

x=[8,3,9,12,5,1,6,4]
insSort(x)
print(x)