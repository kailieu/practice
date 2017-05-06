T = int(input())

for i in range(0, T):
    S = input().split()
    for ch in S[1]:
        for j in range(0, int(S[0])):
            print(ch, end='')
    print('')

