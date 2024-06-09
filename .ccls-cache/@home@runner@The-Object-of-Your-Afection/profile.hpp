#include <iostream>
#include <vector>

class Profile
{
  private:
    std::string name;
    int age;
    std::string city;
    std::string country;
    std::string pronouns;
    std::vector<std::string> hobbies;

  public:
    Profile(std::string user_name, int user_age,  std::string user_city, std::string user_country, std::string user_pronouns, std::vector<std::string> user_hobbies);
    Profile(std::string user_name, int user_age,  std::string user_city, std::string user_country, std::string user_pronouns);
    std::string view_profile();
    void add_hobbie(std::string new_hobbie);
};