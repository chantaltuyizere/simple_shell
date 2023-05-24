# This code will calculate the factorial of a number

def factorial(n):
  """
  Calculates the factorial of a number.

  Args:
    n: The number to calculate the factorial of.

  Returns:
    The factorial of n.
  """

  if n == 0:
    return 1
  else:
    return n * factorial(n - 1)


# This code will ask the user for a number and then print its factorial

number = int(input("Enter a number: "))

print("The factorial of {} is {}".format(number, factorial(number)))
