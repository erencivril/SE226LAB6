import math
#Question1

n = int(input("Please enter the n value: "))
while True:
    x = int(input("Please enter the x value: "))
    if x < 0:
        print("X value has to be greater than 0")
    else:
        break
equation = sum([(lambda i : n**i/math.factorial(i))(i) for i in range(x+1)])
print(equation)

#Question2

result = 0
def sumEquation(n): #This function calculates the summation of the series which is given in lab6 question2
    global result
    #recursion will work until n is not greater than 0
    if n > 0:
        result += (-1) ** (n + 1) / n
        sumEquation(n - 1) # recursion


while True:
    n2 = int(input("Enter the n value: "))
    if n2 < 1:
        print("Please enter a number that is greater or equal to 1")
    else:
        break;
sumEquation(n2)

print("Result of the second question is:", result)
