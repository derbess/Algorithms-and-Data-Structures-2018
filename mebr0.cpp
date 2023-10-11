// this file must be edited each year mebr0 participated in hacktoberfest
#include <iostream>
#include <vector>

int main() {
  std::vector<int> years;
  years.push_back(2020);
  years.push_back(2021);
  years.push_back(2022);
  years.push_back(2023);

  for (int year: years) {
    std::cout << "mebr0 participating in Hacktoberfest " << year << "!" << std::endl;
  }

  return 0;
}
