#pragma once

//Movie.h represents individual movie objects.

#include <string>
#include <iostream>
#include "movies.h"

class Movies;
class Movie
{
private:
    std::string m_title{};
    std::string m_rating{};
    int         m_year{};
    int         m_times_watched{};

    //Member funcs.
    void add_movie(std::string title, std::string rating = "G", int year = 1900, int times_watched = 0);

    void increase_times_watched();

    void print_movie_info();

public:
    friend Movies;
    bool operator==(Movie mov);
    Movie();
};
