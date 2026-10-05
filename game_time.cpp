/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>

int main() {
  int level_1_total = 78 ;
  int level_2_total = 144;
  
  int level_1_hours = level_1_total / 60;
  int level_1_minutes = level_1_total % 60;
  
  int level_2_hours = level_2_total / 60;
  int level_2_minutes = level_2_total % 60;
  
  int diff_total = level_2_total - level_1_total;
  int diff_hours = diff_total / 60;
  int diff_minutes = diff_total % 60;
 
  std::cout << "Level 1 took " << level_1_hours << " hours and " << level_1_minutes << " minutes.\n";
  std::cout << "Level 2 took " << level_2_hours << " hours and " << level_2_minutes << " minutes.\n";
  std::cout << "Level 2 took " << diff_hours << " hours and " << diff_minutes << " minutes longer than Level 1.\n";
    return 0;
}
