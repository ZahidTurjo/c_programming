def f(x):
    return x * x

def main():
    # Input lower limit, upper limit, and intervals
    a = float(input("Enter the lower Limit : "))
    b = float(input("Enter the upper Limit : "))
    n = int(input("Enter the interval : "))

    # Simpson's 3/8 rule requires n to be a multiple of 3
    if n % 3 != 0:
        print("Error: Number of intervals (n) must be a multiple of 3.")
        return

    h = (b - a) / n
    total_sum = f(a) + f(b)

    # Loop through the internal intervals
    for i in range(1, n):
        if i % 3 == 0:
            total_sum += 2 * f(a + i * h)
        else:
            total_sum += 3 * f(a + i * h)

    integral = (3 * h / 8) * total_sum
    
    # print with 6 decimal places using an f-string
    print(f"Integral = {integral:.6f}")

if __name__ == "__main__":
    main()
