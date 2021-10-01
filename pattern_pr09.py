total_rows = int(input("enter a total rows:"))
# col=int((total_rows+1)/2 if total_rows%2==0 else total_rows/2)
for i in range(total_rows):
    print(" "*i,"*"*(2*total_rows-(2*i+1))," "*i,sep="")