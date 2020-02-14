#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main()
{
   
   int LR,UR,SSR,SR,R,Balance,Cost,Value,Time;
   LR = 100;
   UR = 94;
   SSR =82;
   SR = 64;
   R = 46;
   Time = 1; 
   
   cout <<"Welcome to Monster Card Gacha" << endl;

   srand(time(0));
   
   for(Time = 0;Time <=10;Time++)
   {
   
      Value = (rand () % 100) + 1;
      
      //cout << Value <<endl;
      
      if (Value >= LR)
      {
         cout << "You got a Legendary-Rare Monster Card" << endl;
      }
      else if (Value >= UR)
      {
         cout << "You got a Ultra-Rare Monster Card" << endl;
      }
      else if (Value >= SSR)
      {
         cout << "You got a Super-Super-Rare Monster Card" << endl;
      }
      else if (Value >= SR)
      {
         cout << "You got a Super-Rare Monster Card" << endl;
      }
      else if (Value >= R)
      {
         cout << "You got a Rare Monster Card" << endl;
      }
      else
      {
         cout<< "You got a Normal Moster Card" << endl;
      }   
   }   
   
   system("pause");
    
   return 0;
}
