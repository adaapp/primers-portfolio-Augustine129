class Car {
  private:
  std::string car_colour;
  std::string car_make;
  
  //return on and off
  bool engine_status;
    std::string engine() { 
      return engine_status ? "On" : "Off"; 
    }
  bool is_car_locked = false;

    void if_engine_switch(bool state) {

      if (engine_status == state) {
        std::cout << "The engine is" << engine() << "\n";
        return;
      }
      engine_status = state;
      std::cout << "The engine is turning " << engine() << "\n";
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
    
    if(engine_on) {
      std::cout << "\nThe engine is already on\n";
    } else {
      engine_status = true;
      std::cout << "\nTurning the engine on\n";
    } ;   
  };

  void engine_off(void) {
     std::cout << "\nThe engine is already off\n";
    } else {
      engine_status = true;
      std::cout << "\nTurning the engine off\n";
    } ;   
  };


void areaOf(void) {
		std::cout << " - areaOf: not yet implemented\n\n";
}