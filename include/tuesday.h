int passwordStrenght(std::string password) {
  int value = 0; //number of values
  int alphabetCharacters = 0; //number of letters
  int digitNumbers = 0; //number of numbers
  int specilaCharacters = 0; //number of special characters
  
  for(int i = 0; i < password.length(); i++) {

    if(std::isdigit(password[i])) {// if the char is a digit 

      digitNumbers++; //then increase the digit number by 1

    } else if (std::isalpha(password[i])) {// if the char is a alphabetCharacters

     alphabetCharacters++; // then increase the alphabetCharacters by 1

    } else {// if the char is not an alphabetCharacters and not a digitNumbers 

      specilaCharacters++; // increase the special characters by 1

    }
  }
  std::cout << "\nnumber of digit: " << digitNumbers;
  std::cout << "\nnumber of alpha: " << alphabetCharacters;
  std::cout << "\nnumber of special: " <<specilaCharacters;
  if ( password.length() >= 8 && digitNumbers >= 2 && alphabetCharacters >= 4 && specilaCharacters >= 1 ){
    value = 4;
  }

  if ( password.length() >= 8 && digitNumbers >= 2 && alphabetCharacters >= 4){
    value = 3;    
  }

  if( password.length() >= 4 ){
    value = 2;
  }

  if ( alphabetCharacters > 0 || digitNumbers > 0 ) {
    value = 1;
  }

  return value;
}

void passwordComplexityChecker(void) {
  std::string password;
  std::string strenght;
    std::cout << "Enter a password:  ";
    getline(std::cin, password);

  switch(passwordStrenght(password)){
    case 1:
    strenght = "Weak";
    break;
    case 2:
    strenght = "Moderate";
    break;
    case 3:
    strenght = "Strong";
    break;
    case 4:
    strenght = "Very Strong";
    break;
    default:
    strenght = "Error";
  }

    std::cout << "The password '" << password << "' is " << strenght << "\n";
  }

void showEmployees (std::vector<std::string> employees) {
  int employeeSize = employees.size();
  std::cout << "\nThere are " << employeeSize << " employees:\n";
   for (std::string i : employees) {
    std::cout << i << std::endl;
   }
}

void employeeListRemoval(void) {
	using namespace std;

  string input;
  vector<string> employees = { 
    "John Smith", 
    "Jaelynn Stuart", 
    "Kaley Barajas", 
    "Walter Collier", 
    "Cale Myers" };

 showEmployees(employees);  

  cout << "\nEnter an employee name to remove: ";
  getline(cin, input);
  
  auto it = find(employees.begin(), employees.end(), input);
  if (it != employees.end()) {
    employees.erase(it);
  };

 showEmployees(employees);
}