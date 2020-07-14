def main(T):
    while(T):
        N = int(input())
        A = [int(N) for N in input().split(" ")]
        mid = len(A)//2
        i = A[mid-1]+1
        if((2*(sum(A[:mid]))+ i)==sum(A[:len(A)]) or (sum(A[:mid])==sum(A[mid:]))):
            print("yes")
        else:
            print("no") 
        T = T - 1 

if __name__ == "__main__":
    T = int(input())
    main(T)