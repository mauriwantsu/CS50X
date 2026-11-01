while True:
    cents = int(input("Change owed: "))
    if cents >= 0:
        break

coins = 0

quarters = cents // 25
coins = coins + quarters
cents = cents % 25
dimes = cents // 10
coins = coins + dimes
cents = cents % 10
nickels = cents // 5
coins = coins + nickels
cents = cents % 5
pennies = cents
coins = coins + pennies

print(coins)
