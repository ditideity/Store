#Defining a rotation function with the two strings
def rotation(str1,str2):
    #Breaking strings down into lists to go through elements easily
    listr1=[]
    listr2=[]
    for a in str1:
        listr1.append(a)
    print(listr1)

    for b in str2:
        listr2.append(b)
    print(listr2)
    
    #str2 can't be a substring if longer than str1
    if len(listr1)<len(listr2):
        print("Not a rotation")
    
    #Setting up a variable "temp" that contains string1+string1 to check for rotation
    else:
        temp=listr1+listr1
        print("string 1 twice is:",temp)
        #Checking in temp if it contains the first letter for str2
        for i in range(0,len(temp)):
            if temp[i]==listr2[0]:
                print(temp[i],"&",listr2[0],"Match found\n")
                #Then we compare consequent terms in both to check similarity
                for j in range(0,len(listr2)):
                    if temp[i+j]==listr2[j]:
                        print(temp[i+j],"&",listr2[j],"Rotation")
                    else:
                        print(temp[i+j],"&",listr2[j],"Not a rotation anymore")
                        #break now as it stops being a rotation here
                        break
                    #break here as we don't need to continue checing consequent terms of temp
                break
            else:
                print(temp[i],"&",listr2[0],"Not a match")
            
#calling all of it          
s1=input("Enter string 1: ")
s2=input("Enter string 2: ")
rotation(s1,s2)
