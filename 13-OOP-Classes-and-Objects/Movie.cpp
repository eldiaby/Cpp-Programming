#include <iostream>
#include <string>
#include "Movie.h"

Movie::Movie(std::string name_val, std::string rating_val, int watching_val) : name{name_val}, rating {rating_val}, watching_times{watching_val} {

}

void Movie::display() {
  std::cout << this->name << ", " << this->rating << ", " << this->watching_times << std::endl;
}

std::string Movie::get_name () {
  return this->name;
}

void Movie::increment_watched() {
  // this->watching_times++;
  watching_times++;
}

Movie::~Movie() {
}
