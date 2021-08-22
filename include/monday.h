#include <iostream>
using namespace std;

float ftoc(float f) {
  return ((f - 32) * 5 / 9); //Conversion from Fahrenheit to Centigrade.
}

float ctof(float c) {
  return ((c * 9 / 5) + 32); //Conversion from Centigrade to Fahrenheit.
}

float keltof(float b){
return((b-273.15)*1.8 + 32); //Conversion from //Kelvin to Fahrenheit
} 

float keltoc(float a){
return a - 273.15; //Conversion from Kelvin to Centigrade.
}


void fahrenheitCentigradeConversion(void) {
	std::string temp; //This is going to convert the temperature
  std::string label; //This is going to change the name only in the user input
  float originTemperature = 0.0; //The chosen temperature in which the user has started
  float t = 0.0; //This will convert the temperature

  std::cout << "\nPlease enter the starting temperature: ";
  std::getline(std::cin, temp); // This get line function it taken the cin as the firt parameter and the string which is temp as a second parameter
  originTemperature = stof(temp); //It checks whatever the user is using a string to float

//The user press a letter on the keyboard for the  conversion to happen.
  std::cout << "\nPress ‘A’ to convert from Kelvin to Centigrade.";
  std::cout << "\nPress ‘C’ to convert from Fahrenheit to Centigrade";
  std::cout << "\nPress ‘B’ to convert from Kelvin to Fahrenheit.";
  std::cout << "\nPress ‘F’ to convert from Centigrade to Fahrenheit.";

  std::cout << "\nYour choice: ";
  std::getline(std::cin, temp);

  if(temp == "F" || temp == "f") { //The letter f, F is the conversion from Centigrade to Fahrenheit
    t = ctof(originTemperature);
    label = "Centigrade";
  }

   if(temp == "C" || temp == "c") { //The letter c, C is the conversion from Fahrenheit to Centigrade
    t = ftoc(originTemperature);
    label = "Fahrenheit";
  }

  if(temp == "A"|| temp == "a" ){
    t = keltoc(originTemperature);
    label = "Kelvin";
  }//The letter a, A is the conversion from kelvin to centrigrade
  
  if(temp == "B" || temp == "b"){
    t = keltof(originTemperature);
    label = "Kelvin";
  }//The letter b, B is the conversion from kelvin to centrigrade

  else{
    std::cout<<"Please enter a valid choice\n"; //This only apples if the user enered an invalid choice
  }

  std::cout << originTemperature << " degrees " << label << " is = " << t << "\n";
}

void selfServiceCheckout(void) {
  int item = 0;
  int quantity;
  float shoppingTax = 0.0;
  float subTotal = 0.0;
  const float tax = 5.5;
  float total = 0.0;
  float cost = 0.0;

  do{
      item++;
      std::cout<<"Please enter a quantity for item " << item <<" (or 0 to finish): \n";    
      std::cin >> quantity;

      if(quantity > 0) {
      std::cout<<"Please enter item " << item <<" cost: \n";
      std::cin >> cost;
      subTotal = subTotal + (quantity * cost);
      }    
  }
  while(quantity > 0);
  
  std::cout<< "Thank you. \n";

  std::cout<< "\nSubtotal: "<< subTotal;

  shoppingTax = (subTotal * tax)/100;
  
   std::cout << "Shopping Tax: " <<  tax << "\n\n";

  total = subTotal + shoppingTax;
  std::cout << "\nTotal: "<< std::fixed << total <<std::endl; 
      
};
