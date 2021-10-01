total_rows = int(input("enter a total rows:"))
if total_rows%2==0:total_rows+=1
n=int((total_rows+1)/2)
for i in range(0,n):
    print("* "*(i+1))
for i in range(1,n):
    print("* "*(n-i))
