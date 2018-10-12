print("Enter the array to be sorted \n")
a = [int(i) for i in input().split()]

for i in range(len(a)-1):
	# Added optimization since in each iteration we need only to go to n-i-1 where n is the size
	# of the array
	for j in range(len(a)-1-i):
		if a[j] > a[j+1]:
			# swap= ar[j];
			# ar[j] =ar[j+1];
			# ar[j+1]= swap;
			a[j], a[j+1] = a[j+1] , a[j];


print("Acending Order Sorted Array" ,a)