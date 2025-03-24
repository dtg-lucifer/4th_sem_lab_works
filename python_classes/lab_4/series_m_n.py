def print_series(m, n):
    if m > n:
        print("Invalid input. m should be less than or equal to n.")
        return None

    print("Series of numbers from m to n:", end=" ")
    for i in range(m, n + 1):
      print(i, end=" ")
    
    print("\n")

    for i in range(m, n + 1):
      out = "even" if i % 2 == 0 else "odd"
      print(f"{i} is {out}")

m = int(input())
n = int(input())
print_series(m, n)