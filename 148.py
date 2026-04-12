def fact(n):
    p = 1
    for i in range(1, n + 1):
        p *= i
    return p

def gcd_of_factorials(a, b):
    smaller = min(a, b)
    return fact(smaller)

def main():
    a, b = map(int, input("Enter two numbers (a and b): ").split())
    ans = gcd_of_factorials(a, b)
    print(ans)

if __name__ == "__main__":
    main()
