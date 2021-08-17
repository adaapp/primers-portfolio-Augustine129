#include <iostream>

float f_to_c(float f) {
  return ((f - 32) * 5) / 9; //Fahrenheit to Centigrade.
}
float c_to_f(float c) {
  return ((c * 9) / 5) + 32; //Centigrade to Fahrenheit.
}

float c_to_k(float c) {
  return (c + 273.15); //Centigrade to Kelvin.
}

float k_to_c(float k) {
  return (k - 273.15); // Kelvin to Centigrade.
}

float f_to_k(float f) {
  return ((f + 459.67) * 5 / 9); //Fahrenheit to Kelvin.
}

float k_to_f(float k) {
  return ((k * 9 / 5) - 459.67); //Kelvin to Fahrenheit.
}

void sub_menu(){
  //menu options
  std::cout << "\nPress ‘A’ to convert from Fahrenheit to Centigrade.";
  std::cout << "\nPress ‘B’ to convert from Centigrade to Fahrenheit.";
  std::cout << "\nPress ‘C’ to convert from Centigrade to Kelvin.";
  std::cout << "\nPress ‘D’ to convert from Kelvin to Centigrade.";
  std::cout << "\nPress ‘E’ to convert Fahrenheit to Kelvin.";
  std::cout << "\nPress ‘F’ to convert Kelvin to Fahrenheit.";
}

void fahrenheitCentigradeConversion(void) {
  
  std::string temp;
  
  std::string label;
  
  float ot = 0.0;
  
  float t = 0.0;

  
  std::cout << "\nPlease enter the starting temperature: ";
  std::getline(std::cin, temp);
  ot = stof(temp);
 
  std::cin >> ot;


  std::cout << "\nPress ‘C’ to convert from Fahrenheit to Centigrade";
  std::cout << "\nPress ‘F’ to convert from Centigrade to Fahrenheit.\n\n";

  
  std::cout << "\nYour choice: ";
  std::getline(std::cin, temp);
    std::cin >> temp;

 
  if(temp == "C" || temp == "c") {
    t = ftoc(ot);
    label = "Fahrenheit";
  }

   
  if(temp == "F" || temp == "f") {
    t = ctof(ot);
    label = "Centigrade";
  }

 
  std::cout << ot << " degrees " << label << " is = " << t << "\n";
}
void selfServiceCheckout(void) {
	std::cout << " - selfServiceCheckout: not yet implemented\n\n";

	int items = 0;

  float salesTax = 5.5;
 
  float quantity = 1;

  float cost = 0.0;
 
  float subtotal = 0.0;
 
  float total = 0.0;

  
  while (quantity > 0) {
    
    items++;
   
    std::cout << "Please enter a quantity for item " << items << " (or 0 to finish): ";
    std::cin >> quantity;

    if (quantity > 0) {
      
      std::cout << "Please enter item " << items << "'s cost: ";
      std::cin >> cost;
      
      subtotal =+ quantity * cost;
    }
  }

  salesTax = roundf(subtotal * (salesTax/100)*100)/100;

  total = roundf((subtotal - salesTax)*100)/100;

  std::cout << "Thank you.\n\n";

  std::cout << "Subtotal: " << roundf(subtotal*100)/100 << "\n";
 
  std::cout << "Shopping Tax: " << salesTax << "\n\n";
 
  std::cout << "Total: " << total << "\n\n";
}