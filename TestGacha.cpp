/*
Program Creater Jia Zhong
Program Purpose: Work as a Gacha
*/
#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main()
   
   int LR,UR,SSR,SR,R,Balance,Cost,Value,Summon_num;
   LR = 100;//(1% Change of Getting a LR Monster Card.) 
   UR = 95; //(5% Change of Getting a UR Monster Card.) 
   SSR =85; //(10% Change of Getting a SSR Monster Card.)
   SR = 67; //(18% Change of Getting a SR Monster Card.)
   R = 42;//(25% Change of Getting a R Monster Card.)            
 //int N = 1 (59% Change of Getting a Normal Monster Card.) ~ Not needed because of else
   Summon_num = 1;
   
   cout <<"Welcome to Monster Card Gacha" << endl;

   //Allow the random number algorithm  to mixed
   srand(time(0));
   
   for(int i = 1;i <=10;i++)
   {
      
      Value = (rand () % 100) + 1;
      
      //cout << Value <<endl; ~ use to check if the num is random.
      
      if (Value >= LR)
      {
         cout << Summon_num << ":You got a Legendary-Rare Monster Card" << endl;
         Summon_num ++;
      }
      else if (Value >= UR)
      {
         cout << Summon_num << ":You got a Ultra-Rare Monster Card" << endl;
         Summon_num ++;
      }
      else if (Value >= SSR)
      {
         cout << Summon_num << ":You got a Super-Super-Rare Monster Card" << endl;
         Summon_num ++;
      }
      else if (Value >= SR)
      {
         cout << Summon_num << ":You got a Super-Rare Monster Card" << endl;
         Summon_num ++;
      }
      else if (Value >= R)
      {
         cout << Summon_num << ":You got a Rare Monster Card" << endl;
         Summon_num ++;
      }
      else
      {
         cout<< Summon_num << ":You got a Normal Moster Card" << endl;
         Summon_num ++;
      }   
   }   
   system("pause");
   return 0;
}
