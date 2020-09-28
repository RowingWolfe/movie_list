#include "movie.h"

Movie::Movie()
{

}

void Movie::print_movie_info(){
        std::cout << "Title: " << m_title << '\n';
        std::cout << "Year: " << m_year << '\n';
        std::cout << "Rating: " << m_rating << '\n';
        std::cout << "Watched " << m_times_watched << " times." << '\n';
}

void Movie::increase_times_watched(){
        m_times_watched += 1;
}

void Movie::add_movie(std::string title, std::string rating, int year, int times_watched){
    m_title = title;
    m_rating = rating;
    m_year = year;
    m_times_watched = times_watched;
    std::cout << "Adding: " << title << '\n';
}

bool Movie::operator==(const Movie mov){
    return mov.m_title == this->m_title;
}
