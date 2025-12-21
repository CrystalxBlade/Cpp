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

    Q9.
    -------------------------------->

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

    Q10.
    -------------------------------->

#include <iostream>
#include <algorithm>

int main()
{
    std::string name = "cRYSTAL X bLADE";

    for(int i = 0; i < name.length(); i++)
    {
        if(std::islower(name[i]))
            name[i] = std::toupper(name[i]);
        else if(std::isupper(name[i]))
            name[i] = std::tolower(name[i]);
    }

    std::cout << "Toggled string: "<< name;
    return 0;
}

    Q11.
    -------------------------------->



#include <iostream>
#include <algorithm>

int main()
{
    std::string name =  "Crystal x Blade";

    std::reverse(name.begin(), name.end());
    std::cout << name;

    //       or

    int i = 0,  j = name.length() - 1;
    
    while (i < j)
    {
        std::swap(name[i], name[j]);

        i++;
        j--;
    }
    std::cout << name; 
    
    return 0;
}


    Q12.
    -------------------------------->
#include <iostream>

int main()
{

    std::string name = "Cry sta l x Bla de";

    std::string result = "";

    for(int i = 0; i < name.length(); i++)
    {
        if(name[i] != ' ')
        {
            result += name[i];
        }
    }

    std::cout << result;
    return 0;
}

    Q13.
    -------------------------------->

#include <iostream>

int main()
{
    std::string s = "Kung fu Panda";

    int vow = 0, con = 0;

    for(int i = 0; i < s.length(); i++)
    {
        char ch = std::tolower(s[i]);

        if(ch >= 'a' && ch <= 'z')
        {
            if(ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u')
                vow++;
            else
                con++;
        }
    }

    std::cout << "We have " << vow << " vowels and " << con << " consonents";
    return 0;
}

    Q14.
    -------------------------------->


#include <iostream>
#include <algorithm>

int main()
{
    std::string name = "Crystal x Blade";

    for(int i = 0; i < name.length(); i++)
    {
        if(name[i] == ' ')
        {
            name[i] = '_';
        }
    }

    std::cout << name << std::endl;
    
    //        or

    std::string name = "Crystal x Blade";

    std::replace(name.begin(), name.end(), ' ', '_');

    std::cout << name << std::endl;

    return 0;
}



#include <iostream>

int main()
{
    std::string s1 = "Crystal";
    std::string s2 = "Blade";

    if(s1 == s2)
      std::cout << "Equal";
    else
      std::cout << "Different";

    return 0;
}

    Q16.
    -------------------------------->

#include <iostream>
#include <algorithm>

int main()
{
    std::string text = "Kung Fu Panda";
    std::string sub = "Fu";

    if (text.find(sub) != std::string::npos)
        std::cout << "Found substring" << std::endl;
    else
        std::cout << "Not found" << std::endl;   

    return 0;
}

🧠 Mental model (remember this)

Think of npos as:

“I searched the entire string.
There is no place where this substring exists.”

⭐ One-line takeaway

We use npos because it is the only safe, unambiguous way
to represent ‘not found’ for unsigned string indices.


Q17.
-------------------------------->

#include <iostream>

int main()
{
    std::string text = "Kung Fu Panda";
    std::string sub = "Fu";
    
    size_t pos = text.find(sub);

    if (pos != std::string::npos)
        std::cout << "Substring found at the index " << pos << std::endl;
    else
        std::cout << "Substring not found " << std::endl;

    return 0;
}

Q18.
-------------------------------->

*/

#include <iostream>

int main()
{
    std::string text = "KFung Fu Panda Fu Fu";
    std::string word = "Fu";

    int count = 0;
    size_t pos = 0;

    while ((pos = text.find(word, pos)) != std::string::npos)
    {
        count++;
        pos = pos + word.length();
    }

    std::cout << "Word Appears " << count << " times";

    return 0;
}