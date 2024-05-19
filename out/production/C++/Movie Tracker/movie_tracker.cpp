#include "movie_tracker.h"

Movie* Movies::add_movie(str name, double rating, int watch_count)
{
    movie_ptr = new Movie;
    movie_ptr->name = name;
    movie_ptr->rating = rating;
    movie_ptr->watch_count = watch_count;
    return movie_ptr;
}

void Movies::increase_watch_count(str name, int number)
{
    if (movies.size() != 0)
    {
        for (int i = 0; i < movies.size(); i++)
        {
            if (movies.at(i).name == name)
            {
                movies.at(i).watch_count += number;
                movie_exist = 1;
            }
            else
            {

            }
        }
    }
    else
    {
        std::cout << "Error, There are no movies in the list." << std::endl;
    }
    if (!movie_exist)
    {
        std::cout << "Error, this movie is not added to the list yet." << std::endl;
    }
    else
    {
        movie_exist = 0;
    }
    return ;
}

void Movies::display_all_movies()
{
    if (movies.size() != 0)
    {
        for(int i = 0; i<movies.size(); i++)
        {
            std::cout << movies.at(i).name << std::endl;
        }
    }
    else
    {
        std::cout << "Error, There are no movies in the list." << std::endl;
    }
}

str Movie::get_name()
{
    return name;
}

void Movies::get_watch_count(str name)
{
    for (int i = 0; i<movies.size(); i++)
    {
        if (name == movies.at(i).name)
        {
            std::cout << movies.at(i).watch_count << std::endl;
            movie_exist = 1;
            break;
        }
        else
        {

        }
    }
    if(!movie_exist)
    {
        std::cout << "Error, This movie is not present in the list" << std::endl;
    }
    else
    {
        movie_exist = 0;
    }
}

void Movies::get_rating(str name)
{
    for (int i = 0; i<movies.size(); i++)
    {
        if (name == movies.at(i).name)
        {
            std::cout << movies.at(i).rating << std::endl;
            movie_exist = 1;
            break;
        }
        else
        {

        }
    }
    if(!movie_exist)
    {
        std::cout << "Error, This movie is not present in the list" << std::endl;
    }
    else
    {
        movie_exist = 0;
    }
}


