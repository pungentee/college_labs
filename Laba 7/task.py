import random


def howManyDigitsMatch(first: list, second: list) -> int:
    result: int = 0
    for i in first:
        for j in second:
            if i == j:
                second.remove(j)
                result += 1
                break
    return result


getAmountOfDigits = lambda number: len(str(number))
getArrayOfDigits = lambda number: list(map(lambda item: int(item), str(number)))

randomNumber: int = random.randint(0, 999)
userNumber: int = 0
isWin: bool = False
numberLength: list = getAmountOfDigits(randomNumber)
randomDigitsArray: list = getArrayOfDigits(randomNumber)

print(f"Generated number: {randomNumber} // it will be deleted \n")
print(f"Guess the {numberLength}-digit number \n")

while not isWin:
    guessed: int = 0
    matchedPosition: int = 0
    userNumber: str = input("Enter your option: ")
    userDigitsArray: list = []

    if numberLength != getAmountOfDigits(userNumber):
        print("Invalid input")
        continue

    userDigitsArray = getArrayOfDigits(userNumber)

    for i in range(numberLength):
        guessed = howManyDigitsMatch(
            list.copy(randomDigitsArray), list.copy(userDigitsArray)
        )

        if randomDigitsArray[i] == userDigitsArray[i]:
            matchedPosition += 1

    for i in range(numberLength):
        isWin = True
        if randomDigitsArray[i] != userDigitsArray[i]:
            isWin = False

    print(f"Guessed: {guessed}\tMatched position: {matchedPosition}")

print(f"\nYou guessed the number {randomNumber}")
