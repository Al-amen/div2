def can_be_sorted(n, arr):
    for i in range(n - 1):
        if arr[i] > arr[i + 1]:
            digits = [int(digit) for digit in str(arr[i])]
            for digit in digits:
                if digit >= arr[i + 1]:
                    return "NO"
            arr = arr[:i] + digits + arr[i + 1:]
            return can_be_sorted(n, arr)
    return "YES"

def main():
    t = int(input())
    for _ in range(t):
        n = int(input())
        arr = list(map(int, input().split()))
        print(can_be_sorted(n, arr))

if __name__ == "__main__":
    main()
