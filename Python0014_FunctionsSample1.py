def isTriangular(number):

    i = 1
    while number>0:
        number -= i
        i += 1

    if number == 0:
        return 1
    return 0


x = int(input())
while x>0:
    if isTriangular(x):
        print(f"{x} is a triangular number")
    else:
        print(f"{x} is NOT a triangular number")
    x = int(input())
