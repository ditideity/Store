#Matrices to be multiplied
M1=[[20,35,42],
  [56,67,71],
  [18,39,160]]

M2=[[7,8,9],
  [10,11,12],
  [13,14,15]]

#Setting as all 0's to to add values of all respective elements onto
Ans=[[0,0,0],
  [0,0,0],
  [0,0,0]]

'''Running three for loops to run through all rows and columns of A and B matrices (Only three as rows of B and columns of A are equal)''' 
def multiplication(A,B):
    if (len(A[0])!=len(B)):
        print("Invalid")
        return

    for c in range(0,len(B[0])):
        for b in range(0,len(A)):
            for a in range(0,len(A)):
                Ans[a][b]=Ans[a][b]+(A[a][c]*B[c][b])

multiplication(M1,M2)

for i in range(0,Ans[0][0]):
    print(Ans[i],"\n")
