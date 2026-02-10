#include <iostream>

class Movie
{
    public:
    std::string Name;
    std::string Genre;
    float Rating;

    Movie(std::string name, std::string genre, float rating)
    {
        Name = name;
        Genre = genre;
        Rating = rating; 
    }
    
};


int main()
{
    return 0;
}