n=int(input())
level=list(map(int, input().split()))
m, k=map(int, input().split())

level.sort()
k-=1
left=k
right=k
tot_level=level[k]+m
cnt = 1

while (1):
    x=tot_level//cnt
    if 0<left and x<level[left-1]+m:
        left-=1
        tot_level += level[left] + m
    elif right < n - 1 and level[right + 1] <= x:
        right+=1
        tot_level += level[right]
    else:
        break
    cnt += 1

ans = []
for i in range(n):
    if i < left:
        level_i = level[i] + m
    elif i <= right - tot_level % cnt:
        level_i = x
    elif i <= right: 
        level_i = x + 1
    else:
        level_i = level[i]
    ans.append(level_i)

print(*ans)
