total_rows = int(input("enter a total rows:"))
# col=int((total_rows+1)/2 if total_rows%2==0 else total_rows/2)
for i in range(0,total_rows):
    print(" "*(total_rows-i+1),"*"*(2*i+1)," "*(total_rows-i+1),sep="")
