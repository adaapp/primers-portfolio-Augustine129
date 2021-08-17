void fahrenheitCentigradeConversion(void) {
	std::cout << " - fahrenheitCentigradeConversion: not yet implemented\n\n";
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


void selfServiceCheckout(void) {

