#!/usr/bin/python3

def process(arr):
    nrow = len(arr)
    if nrow == 0:
        return
    ncol = len(arr[0])

    ret = ""
    i = 0
    j = -1
    step = 1
    limit = 0

    while True:
        if ncol - limit == 0:
            break

        for c in range(0, ncol - limit):
            j += step
            ret += "{},".format(arr[i][j])

        limit += 1
        if nrow - limit == 0:
            break

        for r in range(0, nrow - limit):
            i += step
            ret += "{},".format(arr[i][j])

        step *= -1

    print(ret)


if __name__ == "__main__":
    process([[1, 2, 3, 4, 5, 6, 7, 8],
             [18, 19, 20, 21, 22, 23, 24, 9],
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
