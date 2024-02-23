for _ in range(int(input())):
    a, b, r = map(int, input().split())
    mx = max(a, b)
    mn = min(a, b)
    x = 0
    for i in range(60, -1, -1):
        p = (mx >> i) & 1
        q = (mn >> i) & 1
        if p == q:
            continue
        if p == 1 and x + (1 << i) <= r and (mx - (1 << i)) >= (mn + (1 << i)):
            x += (1 << i)
            mx -= (1 << i)
            mn += (1 << i)
    print(mx - mn)