#include <iostream>
#include <string>
#include "movies.h"


int main()
{
    Movies movie_list{};
    movie_list.add_movie("Halloween", "R", 1978, 10);
    movie_list.print_all_movies();
    movie_list.add_movie("Halloween", "R", 1978, 10);
    movie_list.increase_movie_watched_count("Halloween");
    movie_list.print_all_movies();
    movie_list.increase_movie_watched_count("Hallooween 2");
}
