#ifndef _MOVIE_TRACKER_H_
#define _MOVIE_TRACKER_H_
#include <iostream>
#include <vector>
#include <string>

using std::vector;
using str = std::string;

class Movie
{
private:
    str name;
    double rating;
    int watch_count;
    friend class Movies;
public:
    str get_name();
};

class Movies
{
private:
    Movie* movie_ptr {nullptr};
    int movie_exist = 0;
public:
    vector<Movie> movies;
    Movie* add_movie(str, double, int);
    void increase_watch_count(str, int);
    void get_watch_count(str);
    void get_rating(str);
    void display_all_movies();
};

#endif