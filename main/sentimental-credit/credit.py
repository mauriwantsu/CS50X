from sys import exit

card = input("Card Number: ")


length = len(card)

if length != 13 and length != 15 and length != 16:
    print("INVALID")
    exit()

total = 0
for i in range(length):
    digit = int(card[i])
    if (length - 1 - i) % 2 == 1:
        doubled = digit * 2
        total += (doubled // 10) + (doubled % 10)
    else:
        total += digit


if total % 10 != 0:
    print("INVALID")
    exit()


if length == 15 and card[:2] in ["34", "37"]:
    print("AMEX")
elif length == 16 and card[:2] in ["51", "52", "53", "54", "55"]:
    print("MASTERCARD")
elif (length == 13 or length == 16) and card[0] == "4":
    print("VISA")
else:
    print("INVALID")    
