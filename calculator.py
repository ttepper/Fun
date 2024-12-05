# Define Variables

def main(): # Main Function

    operation = input("Enter an operation (+, -, *, /): ")
    number1 = float(input("Enter first number: "))
    number2 = float(input("Enter second number: "))

    if operation == "+":
        print(number1 + number2)
    elif operation == "-":
        print(number1 - number2)
    elif operation == "*":
        print(number1 * number2)
    elif operation == "/":
        print(number1 / number2)
    else:
        print("Enter a valid operation!")

main() # Call the function

