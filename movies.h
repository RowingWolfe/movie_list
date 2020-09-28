#pragma once

#include "movie.h"
#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

class Movie;
class Movies{
private:
    std::vector<Movie> movies_watched;

public:
    Movies();
    //Add movie
    void add_movie(std::string title, std::string rating, int year, int times_watched);

    //Print all movies
    void print_all_movies();

    //Increase watched count(movie)
    void increase_movie_watched_count(std::string movie_title);


};
