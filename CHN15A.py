def main(T):
    while(T):
        N,K = map(int,input().split(" "))
        C = [int(N) for N in input().split(" ")]
        w = []
        for i in C:
            w.append((K+i))
        count = 0
        for i in w:
            if i%7==0:
                count = count + 1
            else:
                pass
        print(count)
        T = T - 1

if __name__ == "__main__":
    T = int(input())
    main(T)