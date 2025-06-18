def is_prime(num):
    if num <= 1:
        return False
    i = 2
    while i * i <= num:
        if num % i == 0:
            return False
        i += 1
    return True

def main():
    N = int(input("Enter a number: "))
    count = 0
    num = 1

    while count < N:
        num += 1
        if num == 2 or num % 2 != 0:
            if is_prime(num):
                print(num)
                count += 1

if __name__ == "__main__":
    main()
