if __name__ == "__main__":
    t = int(input())
    while(t):
        n = int(input())
        a = [int(n) for n in input().split(" ")]
        i = 0
        a.sort()
        print(a[0]+a[1])
        t -= 1
