def main(T):
    while(T):
        N,K = map(int,input().split(" "))
        D = input().split(" ")
        allWordsfromPhrases = []
        for i in range(K):
            allWordsfromPhrases += input().split(" ")
        ans = ""
        for i in range(N):
            if D[i] in allWordsfromPhrases:
                ans +="YES "
            else:
                ans +="NO "
        
        print(ans)
        T = T - 1 

if __name__ == "__main__":
    T = int(input())
    main(T)