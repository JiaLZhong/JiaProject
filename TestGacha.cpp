/*
Program Creater Jia Zhong
Program Purpose: Work as a Gacha
*/
#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main()
{
   
   int LR,UR,SSR,SR,R,Balance,Cost,Value,Time;
   LR = 100;//(1% Change of Getting a LR Monster Card.)  
   UR = 95; //(5% Change of Getting a UR Monster Card.) 
   SSR =85; //(10% Change of Getting a SSR Monster Card.)
   SR = 67; //(18% Change of Getting a SR Monster Card.)
   R = 42;//(25% Change of Getting a R Monster Card.)            
   //N=1 (59% Change of Getting a Normal Monster Card.) ~Not needed because of else
   Time = 1; 
   
   cout <<"Welcome to Monster Card Gacha" << endl;
   
   //Making sure the random number algorithm is mixed 
   srand(time(0));
   
   for(Time = 0;Time <=10;Time++)
   {
      //Getting a random number form 1 to 100.
      Value = (rand () % 100) + 1;
      
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
