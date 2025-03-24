def factorial(n):

  if n < 0:
    print("Factorial is not defined for negative numbers.")
    return None

  elif n == 0 or n == 1:
    return 1

  else:
    result = 1

    for i in range(2, n + 1):
      result *= i

    return result

n = int(input())
print(f"Factorial of {n} is:", factorial(n))