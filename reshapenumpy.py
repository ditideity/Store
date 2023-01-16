#importing numpy
import numpy as nump

#User input list
a=input("Enter list element 1x1: ")
b=input("Enter list element 1x2: ")
c=input("Enter list element 1x3: ")
d=input("Enter list element 1x4: ")
e=input("Enter list element 1x5: ")
f=input("Enter list element 1x6: ")

#Defining original 1x6 array
x = nump.array([a,b,c,d,e,f])
print("Original 1x6 list:","\n",x,"\n")
#Resizing
x.resize(2,3)
#Printing new array
print("New 2x3 list:","\n",x)
