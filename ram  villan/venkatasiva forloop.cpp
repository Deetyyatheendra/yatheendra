#include <iostream>
#include <string>

using namespace std;
int main()
{
   string raptor_prompt_variable_zzyz;
   ?? i;
   ?? s;
   ?? en;

   raptor_prompt_variable_zzyz ="enter starting range";
   cout << raptor_prompt_variable_zzyz << endl;
   cin >> s;
   raptor_prompt_variable_zzyz ="enter ending range";
   cout << raptor_prompt_variable_zzyz << endl;
   cin >> en;
   i =s;
   while (!(i>=en))
   {
      cout << i << endl;      i =i+1;
   }

   return 0;
}
