def bitwise_or_range_with_x(x, start, end):
    # Find the most significant bit position where start + 1 and end + 1 differ
    a = start + 1
    b = end + 1
    
    # Perform the bitwise OR in an optimized way
    result = a
    while a != b:
        a |= (a + 1)
        b |= (b - 1)
        if a == b:
            result = a
            break

    # Perform the bitwise OR operation with x
    result |= x
    
    return result

def calculate_value(n, m):
    if m == 0:
        return n
    start = max(0, n - m)
    end = n + m
    result = start
    ans =bitwise_or_range_with_x(result,start,end)
    # for i in range(start + 1, end + 1):
    #     result |= i
    # return result
    return ans
t = int(input())
results = []
for _ in range(t):
    n, m = map(int, input().split())
    results.append(calculate_value(n, m))
for result in results:
    print(result)


