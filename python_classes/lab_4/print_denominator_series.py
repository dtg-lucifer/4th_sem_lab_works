def print_denominator_series(n):
    if n <= 0:
        print("Please enter a positive integer.")
        return None

    series_sum = 0
    print("Series of 1/n for n from 1 to", n, ":", end=" ")
    for i in range(1, n + 1):
        series_sum += 1 / i
        print(f"1/{i}", end=" ")

    print("\nSum of the series:", series_sum)

n = int(input())
print_denominator_series(n)