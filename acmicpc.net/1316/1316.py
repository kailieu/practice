def solution():
    word = input()
    l = 26 * [0]
    prev = ''
    for ch in word:
        idx = ord(ch)-97
        if prev != ch:
            if l[idx] > 0:
                return 0
            else:
                l[idx] = 1

        prev = ch
    return 1

if __name__ == '__main__':
    N = int(input())
    ret = 0
    for i in range(0, N):
        ret += solution()

    print(ret)
