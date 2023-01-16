#Setting up a list
B=[33,55,66,77]
#Printing OG list
print(B)
#Defining recursive function to reverse targetted elements
def recurseList(A, start, end):
    if start >= end:
        return
    A[start], A[end] = A[end], A[start]
    recurseList(A, start+1, end-1)
    
#Calling
recurseList(B, 1, 3)
print(B)
