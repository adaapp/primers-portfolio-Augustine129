# Primer Portfolio

## Section 1 - Primer Challenges
### Primer 1 - Fahrenheit / Centigrade Conversion
This challenge requires us to allow a user to enter a value before selecting whether to convert it from Fahrenheit to Centigrade or Centigrade to Fahrenheit.  As part of the initial design the conversion algorithms were needed for both calculations. 

To help complete this challenge I needed to break the overall problem down into the following main tasks: 
* Get data from the user
* Verify the data is in a suitable format
* Create a method to convert F->C
* Create a method to convert C->F
 
#### Reflection (as well as issues, challenges & resolutions)
The biggest issue was related to testing the areas my solution failed, originally, I tested to see if it worked - however, it wasn’t until I tried to break it that I found some of the more serious issues with my design and implementation.  For example, if the user  enteres a string the console would show an error.
To fix this issue I decided to  use the method stof() which means that the user can't input a string which makes this method more effective.

One thing I could have improved to make my code more readeble and more effective was to use an switch, case because It could be more readeble format instead of writing a bunch of if statements. 

However the reason why I decided to use a if-else statement instead of the switch, case it's because the if-else is better for boolean values also they are great for variable conditions that result into a boolean, and I find it easier to understand.

### Primer 2 - Self-service Checkout
This challenge allows the user to select a number of items and their cost. It was a simple algorithm that calculated the sub total by multiplying the total quantity of the item by cost and adding the 5.5% tax on it and then add those two values together to diplay the total amout spent from the users.

To help complete this challenge I needed to break the overall problem down into the following main tasks: 
* Get data from the user
* Ask the user to input the item quantity
* Ask the user to input the item cost
* Multiply the quantity and cost, at the end add to the subtotal
* Adding of shopping tax and the total
* Create an exit condition from the loop when zero is entered

## REFLECTION

The only issue I had on this primer was the rounding of the subtotal, total and the shopping tax which I did by multiplying the value by 100 and then dividing by 100 after rounding.
However If I run it the the total cost does not round into 2dp.

## Primer 3 - Password Complexity Checker

The main purpose on Primer 3 Challenge was to create a password complexity checker where the program determines the complexity of a password based on its use of numeric alphabetical, numerical, or special characters and it suggested whether the password was weak, moderate, strong or very strong.

To help complete this challenge I needed to break the overall problem down into the following main tasks: 
* Tell the user to write their password
* Run a complexity check based on if is a digit, alphabetical, special characters.

## REFLECTION

I created this program by returning the numbers which are rapresented as if/ else and then returning the outcome of the password complexity by using a switch case which I think in this case was more efficient than the if/else because they are great for a fix data values and it might prove to be faster ifs provided number of cases are good.

## Primer 4 - Employee List Removal

The main purpose on Primer 4 challege it requires us to show a list of employee names and allow the user to type their names of an employee that they want to remove or delete.

To help complete this challenge I needed to break the overall problem down into the following main tasks: 
* I created an array
* Then select the input user of which employee they would like to remove or delete.
* Remove the employee
* The remove the instance of the input only if it was a match with any values in the array.

## REFLECTION
I think the most challenging bit of this primer was to think about where I could store the names of the employees. Then I found out that I could use a vector to store names which means the code needs input validation to show whether the user input is a string or not.