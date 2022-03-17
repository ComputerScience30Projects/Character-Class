#include <string>
#include <vector>
#include <iostream>

class character
{
public:
    character();
    character(std::string name, std::string phrase1, std::string phrase2);

    ~character();

    void speak(size_t phraseNum);
    
    //setters
    void setLevel(size_t level) { _level = level; }

private:
    std::string _name;
    std::string _phrase1, _phrase2;
    size_t _level = 0;    
  

};

character::character()
{
    _name = "John";
    _phrase1 = "No one likes John :(";
    _phrase2 = "Hello I'm John";
} 

character::character(std::string name, std::string phrase1, std::string phrase2)
{
    _name = name;
    _phrase1 = phrase1;
    _phrase2 = phrase2;
}

character::~character()
{
}

void character::speak(size_t phraseNum)
{
    if (phraseNum == 1)
    {
        std::cout << _phrase1 << std::endl;
    }
    else if (phraseNum == 2)
    {
        std::cout << _phrase2 << std::endl;
    }
    else
    {
        std::cout << "ERROR: INVALID PHRASE NUMBER" << std::endl;
    }
}

int main()
{
    //Create objects
    character zuberbuhler("Zuberbuhler", "I hope your paper blows up...", "Don't boil water at 110 degrees!");
    character maxwell("Maxwell", "Run these fists!", "I don't live in a gated community");

    zuberbuhler.speak(1);
    maxwell.setLevel(2);
    maxwell.speak(2);

    size_t a;
    std::cin >> a;
}