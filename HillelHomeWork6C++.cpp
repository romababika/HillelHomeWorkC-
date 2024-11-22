#include <iostream>
#include <string>
#include <vector>

int main() {

   setlocale(LC_CTYPE, "ukr");

   std::string input;
   char searchChar;
   std::vector<int> positions; // Вектор для зберігання позицій

   // Введення рядка
   std::cout << "Введіть рядок: ";
   std::getline(std::cin, input);

   // Введення символу для пошуку
   std::cout << "Введіть символ для пошуку: ";
   std::cin >> searchChar;

   // Пошук символу у рядку
   for (int i = 0; i < input.length(); ++i) {
      if (input[i] == searchChar) {
         positions.push_back(i); // Додаємо позицію до вектора
      }
   }

   // Обробка результатів за допомогою switch
   switch (positions.size()) {
   case 0:
      std::cout << "Символ '" << searchChar << "' не знайдено в рядку." << std::endl;
      break;
   default:
      std::cout << "Символ '" << searchChar << "' знайдено на позиціях: ";
      for (size_t i = 0; i < positions.size(); ++i) {
         std::cout << positions[i];
         if (i != positions.size() - 1) {
            std::cout << ", ";
         }
      }
      std::cout << "." << std::endl;
      break;
   }

   return 0;
}
