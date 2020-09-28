#include "movies.h"

Movies::Movies(){

}

void Movies::add_movie(std::string title, std::string rating, int  year, int times_watched){
    Movie new_movie{};
    new_movie.add_movie(title, rating, year, times_watched);
    if(std::find(movies_watched.begin(), movies_watched.end(), new_movie) != movies_watched.end()) {
        std::cout << "Movie already in list. Did not add. \n";
    } else {
        movies_watched.push_back(new_movie);
    }
}

void Movies::print_all_movies(){
    for(Movie m : movies_watched){
        m.print_movie_info();
    }
}

void Movies::increase_movie_watched_count(std::string movie_title){
    {
            for(Movie m : movies_watched){
                if(m.m_title == movie_title){
                    m.increase_times_watched();
                }else{
                    std::cout << "Movie not in list, maybe try adding it? \n";
                }
            }
        }
}
