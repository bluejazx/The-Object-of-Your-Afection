#include <iostream>
#include <vector>
#include "profile.hpp"

//allows creation of profile with hobbies
Profile::Profile(std::string user_name, int user_age, std::string user_city, std::string user_country, std::string user_pronouns, std::vector<std::string> user_hobbies)
{
  name = user_name;
  age = user_age;
  city = user_city;
  country = user_country;
  pronouns = user_pronouns;
  hobbies = user_hobbies;
}

//allows creation of profile without hobbies
Profile::Profile(std::string user_name, int user_age,  std::string user_city, std::string user_country, std::string user_pronouns)
{
  name = user_name;
  age = user_age;
  city = user_city;
  pronouns = user_pronouns;
}

//allows you to acess a full profile
std::string Profile::view_profile()
{
  std::string user_profile = "Name: " + name + "\n" + "Age: " + std::to_string(age) + "\n" + "City: " + city  + "\n" + "Pronouns: " + pronouns + "\n" + "Hobbies: ";
  for(int i = 0; i < hobbies.size(); i++)
    {
       user_profile += "\n" + hobbies[i];
    }
   user_profile += "\n\n";
  return user_profile;
}

//allows you to add hobbies
void Profile::add_hobbie(std::string new_hobbie)
{
  hobbies.push_back(new_hobbie);
}