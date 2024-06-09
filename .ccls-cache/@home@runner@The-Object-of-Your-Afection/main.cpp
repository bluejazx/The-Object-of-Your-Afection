#include <iostream>
#include "profile.hpp"

int main ()
{
  Profile delilah("Delilah Plain-White-Tee", 21, "New York City, New York", "US" ,"she/her", {"hiking", "running","drawing",});
  std::cout << delilah.view_profile();
  delilah.add_hobbie("singing");
  std::cout << delilah.view_profile();
  
}