/*
#include <iostream>

int main()
{
    

    Q1.
    -------------------------------->    
    
    std::string name;
    std::cout << "Enter name ";
    std::getline(std::cin, name);
    std::cout << "Sup "<< name << std::endl;

    Q2.
    -------------------------------->  
    
    std::string name = "Crystal";
    std::cout << "length / size is " << name.length() << std::endl;

    Q3.
    -------------------------------->  

    std::string s = "Crystal";

    std::cout << "First character: " << s[0] <<std::endl;
    std::cout << "Last character: " << s[s.length() - 1] <<std::endl;

    Q4.
    -------------------------------->
    
    std::string s = "Crystal";
    
    for(int i = 0; i < s.length(); i++)
    {
        std::cout << s[i] << " ";
    }
        
     //   or
     
    std::string s = "Crystal";
     
    for(char c : s)
    {
        std::cout << c << " ";
    }
    
    Q5.
    -------------------------------->
    
    std::string name = " ";

    if(name.empty())
        std::cout << "String is empty";
    else
        std::cout << "name = " << name;    

    Q6.
    -------------------------------->

    std::string name = "Crysta";

    name.push_back('l');
    std::cout << name << std::endl;

    Q7.
    -------------------------------->
    
    std::string name = "Crystal";

    name.pop_back();
    std::cout << name << std::endl;
    
    Q8.
    -------------------------------->   
    
*/

#include <iostream>
#include <algorithm>

int main()
{
    std::string name = "blade";
    
    std::transform(name.begin(), name.end(), name.begin(), ::toupper);
    
    std::cout << name << std::endl;
    
    //       or
    
    std::string name = "blade";

    for(int i = 0; i < name.length(); i++)
    {
        name[i] = std::toupper(name[i]);
    }

    std::cout << name;
    return 0;
}


/*
#include <iostream>
#include <algorithm>

int main()
{
    std::string name = "CRYSTAL";
    
    std::transform(name.begin(), name.end(), name.begin(), ::tolower);
    std::cout << name;
    
   
    //     or

   std::string name = "CRYSTAL";

   for(int i = 0; i < name.length(); i++)
   {
     name[i] = std::tolower(name[i]); 
   }

   std::cout << name;

    return 0;
}

*/