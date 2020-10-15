if __name__ == "__main__":
    t = int(input())
    denom = [100, 50, 10, 5, 2, 1]
    for i in range(t):
        amt = int(input())
        ans = 0
        i = 0
        while amt != 0:
            x = amt // denom[i]
            amt -= x*denom[i]
            ans += x
            i += 1
        print(ans)
