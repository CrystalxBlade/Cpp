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
    Movie m1("Batman", "Action", 9.5);
    Movie m2("F1", "Racing", 9.6);

    return 0;
}