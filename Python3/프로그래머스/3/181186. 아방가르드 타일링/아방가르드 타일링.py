def solution(n):
    DIV=1000000007
    if n==1: return 1
    elif n==2: return 3
    elif n==3: return 10
    dp=[0]*(n+1)
    dp[0]=1
    dp[1]=1
    dp[2]=3
    dp[3]=10
    dp[4]=23
    for i in range(5,n+1):
        dp[i] = (dp[i-1]+2*dp[i-2]+6*dp[i-3]+dp[i-4]-dp[i-6])%DIV
    return dp[-1]