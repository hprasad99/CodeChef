def main(T):
    while(T):
        N = int(input())
        W = [int(N) for N in input().split(" ")]
        op = sum(W)-N*min(W)
        print(op)
        T = T - 1 

if __name__ == "__main__":
    T = int(input())
    main(T)