# TODO
from cs50 import get_float
from cs50 import get_int

while True:
    cents = get_float("Change:")
    if cents > 0:
        break

cents = round(cents*100)

count = 0

# number of quarters
while cents >= 25:
    cents = cents - 25
    count += 1

# number of dimes
while cents >= 10:
    cents = cents - 10
    count += 1

# number of NIckels
while cents >= 5:
    cents = cents - 5
    count += 1

# number of dimes
while cents >= 1:
    cents = cents - 1
    count += 1

print("Total coins ", count)