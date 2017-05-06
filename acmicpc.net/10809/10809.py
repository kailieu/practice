S=input()
count = 26 * [-1]
for i,v in enumerate(S):
    pos = ord(v)-97
    if count[pos] == -1:
       count[pos] = i

print(' '.join(list(str(i) for i in count)))
