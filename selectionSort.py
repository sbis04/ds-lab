print("Enter array to be sorted ");

A = [int(i) for i in input().split()]


for i in range(len(A)):
     
    mini = i
    for j in range(i+1, len(A)):
        if A[mini] > A[j]:
            mini = j
             
      
    A[i], A[mini] = A[mini], A[i]
 
print ("Sorted array" , A)
 
