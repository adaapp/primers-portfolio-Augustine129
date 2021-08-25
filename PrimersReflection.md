# Primer Portfolio
## Section 1 - Primer Challenges
### Primer 1 - Fahrenheit / Centigrade Conversion
This challenge requires us to allow a user to enter a value before selecting whether to convert it from Fahrenheit to Centigrade or Centigrade to Fahrenheit.  As part of the initial design the conversion algorithms were needed for both calculations. 
To help complete this challenge I needed to break the overall problem down into the following main tasks: 
* Get data from the user
* Verify the data is in a suitable format
* Create a method to convert F->C
* Create a method to convert C->F
* Allow the user to select the conversions option
* Output result of conversion to user

#### Reflection (as well as issues, challenges & resolutions)
The biggest issue was related to testing the areas my solution failed, originally, I tested to see if it worked - however, it wasn’t until I tried to break it that I found some of the more serious issues with my design and implementation.  For example, the programme crashed when string was entered as input instead of float. Then I used try/catch block of code. What it does is, it prevents the programme from crashing and displays the exception on the console.

### Primer 2 - Self-service Checkout
This challenge requires us to allow the user to input number of items and their cost unless they terminate it by inputting 0. The programme should then calculate the sub total and apply a fixed shopping tax on it and then add those two values together to display the total amount.
#### Reflection (as well as issues, challenges & resolutions)
The first thing that needed to figure out was how to loop through the prompts to keep asking for inputs unless 0 was entered. That was solved using do while loop. 
I also thought about abstracting the following piece of code into its own pure function:
```
subTotal = subTotal + (quantity * cost);
```
but then I realised that sometimes that approach is not the most efficient way forward.
I enjoyed the calculations required as part of the challenge. 
### Primer 3- Password Complexity Checker
Primer 3 requires us to write a programme that allows a user to input a password and to check its complexity. As per the requirements, there can be four levels of complexity- weak, moderate, strong and very strong.
#### Reflection (as well as issues, challenges & resolutions)
The programme that I wrote keeps asking for a password until it's complexity is 'weak'.
A helper function 'passwordChecker' was created to abstract the mechanism behind checking the complexity.
The programme makes use of switch statements as they are more efficient than if statements.
### Primer 4 - Employee List Removal
This challenge requires us to display a list of employee names and allow a user to input the name of an employee that they want to remove.
#### Reflection (as well as issues, challenges & resolutions)
Figuring out how to store the names of the employees was the most challenging part of this primer. I started off by exploring arrays as a data structure to store the names of the employees. But removing an element from the array without knowing it's size was not possible. Hence, I decided to use vector to store the names. 
The programme needs input validation to see whether the input provided by the user is a string or not. 

### Primer 7 - Sleep timer
This challenge requires us to write a blocking function that would have a default value of 10 seconds of no parameter is passed. 
	