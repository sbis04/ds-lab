print("Enter the array to be sorted \n")
a = [int(i) for i in input().split()]


for i in range(len(a)):
	key = a[i]
	j=i-1
	while j>=0 and key<a[j]:
		a[j+1]=a[j]
		j-=1
	a[j+1]=key

print("Acending Order Sorted Array" ,a)