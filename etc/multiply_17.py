def Solution(l):
    a = l.copy()
    a.extend([0, 0, 0, 0])
    b = [0, 0, 0, 0]
    b.extend(l)
    c = [0] * len(a)
    def _handle_ripple(a, b, c, idx, r):
        if idx == 0:
            if a[idx] & r == 1:
                c.insert(0, 1)

            return c

        c[idx] = (a[idx] ^ b[idx]) ^ r
        r = (a[idx] & b[idx]) | (a[idx] | b[idx]) & r
        print(a[idx], b[idx], r)
        return _handle_ripple(a, b, c, idx-1, r)

    return _handle_ripple(a, b, c, len(a)-1, 0)


if __name__ == "__main__":
    print(Solution([0, 0, 0, 0, 1]))

