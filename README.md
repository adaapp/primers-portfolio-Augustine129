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
The only issue I had on this primer was the rounding of the subtotal, total and the shopping tax which by multiplying the value by 100 and then dividing by 100 after rounding.
However If I run it the the total cost does not round into 2dp

---
## Section 3 - Continued Professional Development
### Benefits of becoming a Polyglot Programmer
Vestibulum vitae semper sem. Duis leo leo, suscipit at felis non, pellentesque varius massa. Sed sit amet orci nibh. Morbi scelerisque faucibus elit, vitae mollis turpis finibus eget. In convallis euismod nunc non imperdiet. Duis ultricies pulvinar lorem, sed molestie nunc porta at. Aenean arcu ante, efficitur nec felis sed, feugiat iaculis turpis. Vestibulum eu elementum diam. Quisque nec tortor auctor, scelerisque ante vitae, fringilla tellus.

Quisque ligula lectus, efficitur quis malesuada sit amet, malesuada sed nibh. In lorem erat, elementum quis tempus nec, rhoncus ac ante. Mauris suscipit massa tempor, pulvinar neque vel, gravida nulla. Donec massa diam, molestie in diam nec, vulputate faucibus ligula. Aliquam erat volutpat. Aliquam sit amet dui ligula. Nullam euismod eros ultrices magna convallis lobortis. Proin convallis placerat tincidunt. Quisque interdum, nisi id egestas luctus, augue libero lacinia urna, sit amet tempus nisl sem nec quam. Vestibulum interdum urna mauris, vel dignissim nisi dignissim egestas. Donec volutpat dictum dui, at egestas sem tristique nec.
