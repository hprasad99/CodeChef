def main(T):
    while(T):
        N,Q = map(int,input().split(" "))
        S = str(input())
        count = 0
        freq = [0]*26
        offset = ord('a')
        for i in S:
            freq[ord(i)-offset] +=1
        print(freq)
        for i in range(0,Q):
            C = int(input())
            for i in freq:
                if(i>=C):
                    val = i - C
                    count += val
            print(count)
            count = 0
        T = T - 1

if __name__ == "__main__":
    T = int(input())
    main(T)