W = input().upper()
l = 26 * [0]
for ch in W:
    pos = ord(ch)-ord('A')
    l[pos] += 1

m = 2 * [0]
mi = 2 *[0]
for i,v in enumerate(l):
    if m[0] <= v:
        m[1] = m[0]
        m[0] = v
        mi[1] = mi[0]
        mi[0] = i

if m[0] == m[1]:
    print('?')
else:
    print(chr(mi[0]+ord('A')))
