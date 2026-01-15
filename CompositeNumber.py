num = int(input("Enter a number: "))

if num <= 1:
    print("Not a composite number")
else:
    composite = False
    for i in range(2, int(num**0.5) + 1):
        if num % i == 0:
            composite = True
            break

    if composite:
        print(num, "is a Composite number")
    else:
        print(num, "is NOT a Composite number")
