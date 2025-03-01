#include "Movies.h"
#include <iostream>
#include <string>

Movies::Movies(/* args */){
};

bool Movies::add_movie(std::string name_val, std::string rating_val, int watching_val) {
  // If the movie is already exist 
  for (Movie movie: playlist)
    if(movie.get_name() == name_val)
      return false;

  // If the movie is not exist
  playlist.push_back(Movie{name_val, rating_val, watching_val});
  return true;
}

void Movies::display() const {
  // If the list is empty 
  if(this->playlist.size() == 0)
    std::cout << "Sorry, The playlist is empty!" << std::endl;
  // If the list is not empty
  else 
    for (Movie movie: playlist)
      movie.display();

  std::cout << std::endl;
}

bool Movies::increment_watched(std::string name) {
  for (Movie &movie: playlist) 
    if (movie.get_name() == name) {
      movie.increment_watched();
      return true;
    }
  return false;
}

Movies::~Movies() {};