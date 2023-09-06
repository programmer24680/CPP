#include "movie_tracker.cpp"

int main()
{
    Movies m;
    int task_running = 1;
    int choice = 0;
    str name;
    double rating = 0;
    int watch_count = 0;
    int movie_exist = 0;
    while (task_running)
    {
        std::cout << "What do you want to do? " << std::endl;
        std::cout << "1. Add a movie" << std::endl;
        std::cout << "2. Increase watch count" << std::endl;
        std::cout << "3. Display all movies" << std::endl;
        std::cout << "4. Display watch count" << std::endl;
        std::cout << "5. Display rating" << std::endl;
        std::cout << "6. Quit" << std::endl;
        std::cin >> choice;
        if (choice == 1)
        {
            std::cout << "Enter the name, rating and watch count of the movie in three space separated characters in the mentioned order: ";
            std::cin >> name;
            std::cin >> rating;
            std::cin >> watch_count;
            for(int i = 0; i<m.movies.size(); i++)
            {
                if (name == m.movies.at(i).get_name())
                {
                    std::cout << "Error, this movie already exist in the list." << std::endl;
                    movie_exist = 1;
                    break;
                }
                else
                {

                }
            }
            if (!movie_exist)
            {
                m.movies.push_back(*m.add_movie(name, rating, watch_count));
            }
            else
            {
                movie_exist = 0;
            }
        }
        else if (choice == 2)
        {
            std::cout << "Enter the name and watch count of the movie in two space separated characters in the mentioned order: ";
            std::cin >> name;
            std::cin >> watch_count;
            m.increase_watch_count(name, watch_count);
        }
        else if (choice == 3)
        {
            m.display_all_movies();
        }
        else if (choice == 4)
        {
            std::cout << "Enter the name of the movie" << std::endl;
            std:: cin >> name;
            m.get_watch_count(name);
        }
        else if (choice == 5)
        {
            std::cout << "Enter the name of the movie" << std::endl;
            std:: cin >> name;
            m.get_rating(name);
        }
        else if (choice == 6)
        {
            task_running = 0;
        }
        else
        {
            std::cout << "Please enter a number between 1 and 6." << std::endl;
        }
    }
    return 0;
}