int passwordStrenght(std::string password) {
  int value = 0;
  int alphabetCharacters = 0;
  int digitNumbers = 0;
  int specilaCharacters = 0;
  //int capitalLetters = 0;
  //int smallLetters = 0;
  
  for(int i = 0; i < password.length(); i++) {

    if(std::isdigit(password[i])) {

      digitNumbers++;

    } else if (std::isalpha(password[i])) {

     alphabetCharacters++;

    } else {

      specilaCharacters++;

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

void employeeListRemoval(void) {
	std::cout << " - employeeListRemoval: not yet implemented\n\n";
}
