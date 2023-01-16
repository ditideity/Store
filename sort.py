#Taking user-input list in terms of individual elements so as to define all elements as integers
numbers=[]
for i in range(0,5):
    x=int(input("Enter list elements one at a time: "))
    numbers.append(x)
#printing original list
print (numbers)
#Setting up "i" to go through list and compare consecutive terms
i=1
while i<5:
#Setting up if, else condition to check for sorting and give fitting result
    if numbers[i]<numbers[i-1]:
        print(numbers[i-1],"&",numbers[i],": Elements are not sorted anymore\n")
        #Once sorting order has been violated, we know list is not sorted, hence, break
        print("VERDICT: Not sorted")
        break
    
    else:
       print (numbers[i-1],"&",numbers[i],": Elements are sorted so far")
    
    i=i+1
#i will only reach 5 if it does not break anywhere in the list and only escapes when the while condition is over
if i==5:
    print("VERDICT: Sorted")
