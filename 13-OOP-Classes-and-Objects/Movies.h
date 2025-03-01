#ifndef _MOVIES_H_
#define _MOVIES_H_

#include <vector>
#include "Movie.h"

class Movies
{
private:
  /* data */
  std::vector <Movie> playlist;

public:
  Movies(/* args */);
  bool add_movie(std::string, std::string, int);
  bool increment_watched(std::string);
  void display() const;
  ~Movies();
};


#endif