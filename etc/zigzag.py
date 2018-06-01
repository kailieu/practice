def process(arr):
    nrow = len(arr)
    if nrow == 0:
        return
    ncol = len(arr[0])

    delta = 1
    c = 0
    r = 0
    ret = ""

    while r < nrow and c < ncol:
        ret += "{},".format(arr[r][c])

        # in bound
        if (c + delta >= 0 and c + delta < ncol) and (r - delta >= 0 and r - delta < nrow):
            c += delta
            r -= delta
        else:  # out of bound
            if delta == 1:
                if c + delta < ncol:
                    c += delta
                else:
                    r += delta
            else:
                if r - delta < nrow:
                    r -= delta
                else:
                    c -= delta

            delta *= -1

    print(ret)


if __name__ == "__main__":
    process([[ 1,  2,  3,  4,  5,  6,  7,  8],
             [18, 19, 20, 21, 22, 23, 24,  9],
             [17, 16, 15, 14, 13, 12, 11, 10]])

    process([[1, 2,],
             [8, 3],
             [7, 4],
             [6, 5]])

    process([[1, 2]])

    process([[1],
             [2]])

    process([[1]])

    process([[]])

