#include <iostream>
#include <string>
using namespace std;
int main()
{
   std::cout << "Hello, " << "!\n";
   string Automatic_Irrigation_System_zzyz;
   int bottom_threshold;
   int irrigation;
   int value;
   int threshold;
   int tank_water_level;
   int threshold_level;

   while (1)
   {
      while (1)
      {
         Automatic_Irrigation_System_zzyz ="Measure soil moisture";
         cout << Automatic_Irrigation_System_zzyz << endl;
         cin >> value;
         threshold =50;
         if (value<threshold) break;
         cout << "SENDING REPORT ALL OK" << endl;  
      }
      while (1)
      {
         Automatic_Irrigation_System_zzyz ="Measure tank water level ";
         cout << Automatic_Irrigation_System_zzyz << endl;
         cin >> tank_water_level;
         bottom_threshold =30;
         if (tank_water_level>bottom_threshold) break;
         cout << "Motor pump Switched ON " << endl;       
         cout << "Alarm on to fill tank and motor is switched off" << endl;    
     }
      Automatic_Irrigation_System_zzyz ="STARTING IRRIGATION";
      cout << Automatic_Irrigation_System_zzyz << endl;
      cin >> irrigation;
      threshold_level =50;
      if (irrigation>threshold_level) break;
   }
   cout << "SENDING REPORT ALL OK" << endl;
   return 0;
}
