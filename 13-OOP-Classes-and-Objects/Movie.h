#ifndef _MOVIE_H_
#define _MOVIE_H_

#include <string>

class Movie
{
private:
  /* data */
  std::string name;
  std::string rating;
  int watching_times;

public:
  Movie(std::string , std::string, int);
  void display();
  std::string get_name();
  void increment_watched();
  ~Movie();
};

#endif