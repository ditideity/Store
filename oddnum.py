#Defining a function that finds and prints all the odd numbers from the given list
def oddnums(numbers):
    for k in numbers:
        if (k%2!=0):
          print (k)

#Defining a user-given array of numbers and then performing previous function on it
numbers=[]
#Taking in list, element by element so as to define as integer and perform integer-operations
for i in range(0,5):
    x=int(input("Enter one element of the list: "))
    numbers.append(x)
print(numbers)
print("Non-even numbers of list:")
oddnums(numbers)
