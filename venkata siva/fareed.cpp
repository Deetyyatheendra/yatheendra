#include <iostream>
#include <string>

using namespace std;
int main()
{
   string raptor_prompt_variable_zzyz;
   ?? count;
   ?? i;
   ?? n;

   raptor_prompt_variable_zzyz =" enter the no: ";
   cout << raptor_prompt_variable_zzyz << endl;
   cin >> n;
   i =1;
   count =0;
   while (!(i>n))
   {
      if (n % i==0)
      {
         count =count+1;
      }
      else
      {
      }
      i =i+1;
   }
   if (count==2)
   {
      cout << "prime" << endl;   }
   else
   {
      cout << "not prime" << endl;   }

   return 0;
}
