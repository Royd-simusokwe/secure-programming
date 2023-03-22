/**
 * Name: Royd simusokwe
 * filename: guess.cpp
 * Date: 23rd february
 */
#include <iostream>
#include <ctime>

int main()
{
   std::srand(std::time(0));

   char play;
   int guess;
   int tries = 0;
   int lucky_num = std::rand() % 100;

   std::cout << "do you want to play?" << std::endl;
   std::cin >> play;
   while (tries < 6)
   {
      if (play == 'y' || play == 'Y')
      {
         while (guess != lucky_num)
         {
            std::cout << "Enter your guess number between 1 - 100.\n";
            std::cin >> guess;
            if (guess < lucky_num)
            {
               std::cout << "Your guess is too low , guess again\n";
               break;
            }
            else if (guess > lucky_num)
            {
               std::cout << "Your guess is too high, guess again\n";
               break;
            }
            if (guess == lucky_num)
            {
               std::cout << "You win you guess the number correctly after " << tries + 1 << " Attempts.\n";
            }
            tries++;
         }
      }
      else
      {
         std::cout << "goodbye!\n";
         break;
      }
      tries++;
   }

   return 0;
}