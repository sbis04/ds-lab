ans=int(input("Enter number to be searched "));
print("Enter the array to be searched \n")

print("Enter numbers in array to be sorted")
ar = [int(i) for i in input().split()]
flag=0;
for i in range(len(ar)):
	if ar[i] == ans:
		flag=flag+1;
print(flag)

if flag==0:
	print("The element is not present in the array")
else:
	print("The element comes", flag , "times in the array")
