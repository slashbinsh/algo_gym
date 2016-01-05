# http://www.geeksforgeeks.org/print-concatenation-of-zig-zag-string-form-in-n-rows/


def zig_zag_concat(string, n):
    if n == 1:
        return string

    output = ['']*n
    row = 0
    down = False

    for item in string:
        output[row] +=item

        if row == 0:
            down = True
        elif row == n-1:
            down = False

        value = 1 if down else -1
        row += value

    return ''.join(output)

print(zig_zag_concat("GEEKSFORGEEKS", 3))

