def capwords(string,sep=" "):
    string=str(string).split()
    print("...".join(string))

msg = input("Enter Input: ")
capwords(msg)
