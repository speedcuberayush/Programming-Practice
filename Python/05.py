INF = 10**18

for _ in range(int(input())):
    n = int(input())
    a = list(map(int, input().split()))
    s = sum(a[i] if i % 2 == 0 else -a[i] for i in range(n))
    if n == 1: 
        print(s); continue

    ans, best = max(s, s + (n-1 if n%2 else n-2)), -INF
    mn = 2*a[0]
    for i in range(1, n):
        mn, best = (min(mn, 2*a[i]+i), best) if i % 2 == 0 else (mn, max(best, 2*a[i]+i - mn))
                
    mx = 2*a[1]-1 if n>1 else -INF
    
    for i in range(2, n):
        mx, best = (max(mx, 2*a[i]-i), best) if i % 2 else (mx, max(best, mx-(2*a[i]-i)))
    print(max(ans, s+best) if best > -INF else ans)
