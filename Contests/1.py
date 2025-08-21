t=int(input())
for _ in range(t):
    n,m,q=map(int,input().split())
    a=sorted(map(int,input().split()),reverse=True)
    b=sorted(map(int,input().split()),reverse=True)
    preA=[0]; preB=[0]
    for v in a: preA.append(preA[-1]+v)
    for v in b: preB.append(preB[-1]+v)
    for _ in range(q):
        x,y,z=map(int,input().split())
        l=max(0,z-y); r=min(z,x); ans=0
        for i in range(l,r+1): ans=max(ans,preA[i]+preB[z-i])
        print(ans)
