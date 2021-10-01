total_rows = int(input("enter a total rows:"))
for i in range(1, total_rows+1):
    for j in range(1, i+1):
        print(f"{j} ", end="")
    print()
