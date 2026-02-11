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
    Movie()
    {
        Name = "";
        Genre = "";
        Rating = 0;
    }
    Movie(const Movie& original)
    {
        Name = original.Name;
        Genre = original.Genre;
        Rating = original.Rating;
    }
    Movie& operator=(const Movie& original)
    {
        Name = original.Name;
        Genre = original.Genre;
        Rating = original.Rating;

        return *this;
    }
};


int main()
{
    Movie m1("Batman", "Action", 9.5);
    Movie m2("F1", "Racing", 9.6);

    Movie m3(m1);
    Movie m4 = m2;
    return 0; 
}