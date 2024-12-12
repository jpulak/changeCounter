# changeCounter
Write a program that helps a cashier make change. The program gets a dollar amount from the user as a double, and calculates and displays how to make the change amount entered using the smallest number of bills and coins possible. The change should be made by first giving the maximum number of dollars, followed by the maximum number of quarters, then dimes, nickels, and finally pennies. Your answer should never have more than 3 quarters, 2 dimes, 1 nickel, or 4 pennies. You may assume that only amounts greater than $0 will be entered.

Hint: Convert the amount entered by the user to pennies first. The total number of pennies should be an integer (you cannot have a fractional amount of pennies). You may find that some of your answers are correct, but others are slightly off - perhaps you are missing a penny. As an example, use 4.14 as input. What do you think is causing this to happen? There is a function in the cmath library which can help you get back the missing penny.

Be sure to prompt the user to input an amount of change. For example:
```
Enter the change amount to make in dollars:
```

Example Output
For example, if the user enters 19.39, the output of your program should be as shown below. Note, there is one tab before each of the quantities of dollars, quarters, etc.
```
Change Due:

    19 dollars
    1 quarters
    1 dimes
    0 nickels
    4 pennies
```
Make sure you include a clear and explicit prompt asking the user to enter the amount of the change to be made in dollars.

Clearly label each output including the units.
