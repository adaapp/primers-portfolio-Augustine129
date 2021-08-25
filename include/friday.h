
void carClass(void) {
		std::cout << " - carClass: not yet implemented\n\n";
}
class Car {
  private:
  std::string car_colour;
  std::string car_make;
  bool is_engine_on;
  bool carLocked = false;

    // void if_engine_switch(bool state) {

    //   if (engine_status == state) {
    //     std::cout << "The engine is" << engine() << "\n";
    //     return;
    //   }
    //   engine_status = state;
    //   std::cout << "The engine is turning " << engine() << "\n";
    // }
  public:
  Car() {
    set_colour();
    set_make();
    engine_off();
  }

  ~Car() {
    std::cout <<"\nDestroyed";
  }


  void set_colour(std::string colour = "Pink") {// This method set the  colour
    car_colour = colour;
  };

  std::string get_colour(void) {//method to get colour
    return car_colour;
  }

  void set_make(std::string make = "Range Rover") {//This method to set make
    car_make = make;
  };

  std::string get_make(void) {//method to get make
    return car_make;
  };

  void engine_on(void) {

    if(is_engine_on) {
      std::cout << "\nThe engine is already on\n";
    } else {
      is_engine_on = true;
      std::cout << "\nTurning the engine on\n";
    } ;   
  };

  void engine_off(void) {
     std::cout << "\nThe engine is already off\n";
    } else {
      is_engine_on = false;
      std::cout << "\nTurning the engine off\n";
    } ;   
  };

  void locked(bool isLocked) {
    if(isLocked && !isLocked) {
      isLocked = true;
      std::cout << "\nThe car is now lock\n";
    } else if(isLocked && isLocked) { 
      std::cout << "\nThe car is already lock\n";
    } else if(!isLocked && isLocked) { 
      isLocked = false;
      std::cout << "\nThe car is not lock\n";
    } else {
      std::cout << "\nThe car is already not lock\n";
    }

  }


void areaOf(void) {
		std::cout << " - areaOf: not yet implemented\n\n";
}