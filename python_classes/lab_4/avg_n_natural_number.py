def avg_of_n_natural_numbers(n):
    if n <= 0:
        print("Please enter a positive integer.")
        return None
    
    total_sum = 0
    for i in range(1, n + 1):
      total_sum += i

    average = total_sum / n
    return average


n = int(input())
print(f"Average of first {n} natural numbers is:", avg_of_n_natural_numbers(n))