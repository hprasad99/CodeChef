def main(T):
    while(T):
        N, C = map(int,input().split(" "))
        A = [int(N) for N in input().split(" ")]
        if(C>=sum(A)):
            print('Yes')
        else:
            print('No')
        T = T - 1

if __name__ == "__main__":
    T = int(input())
    main(T)
