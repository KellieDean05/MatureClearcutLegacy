//Kellie Henderson restaurant structure style
#include <iostream>
#include<string>
#include<vector>
using namespace std;

struct MenuItem
{
  string name;
  double itemCost;
  string desc;
  char addLetter;
  char removeLetter;
  int count; //how many of that item did you order
};

//function definition
void populateMenu(vector<MenuItem> &entireMenu)
{
//put some default values in our Menu
const int numItems = 3;
MenuItem Item1;// Item1 is data type MenuItem
MenuItem Item2;
MenuItem Item3;

entireMenu.push_back(Item1);//add to the end of the list the Item1
entireMenu.push_back(Item2);//add to the end of the list the Item2
entireMenu.push_back(Item3);//add to the end of the list the Item3
vector<string> defaultMenuNames = {"Green Tea", "Item 2", "Item 3" };
vector<char> defaultAddLetters = {'A','B', 'C'};
vector<char> defaultRemoveLetters = {'a', 'b', 'c'};
for(int i = 0; i < numItems; i++)
  {
      // add each item to the default list efficiently 
      entireMenu[i].name = defaultMenuNames[i];
      entireMenu[i].addLetter = defaultAddLetters[i];
      entireMenu[i].removeLetter = defaultRemoveLetters[i];
      entireMenu[i].itemCost = (3.00 + i); // set a random starter cost for each item
      entireMenu[i].count = 0;
      entireMenu[i].desc = "Delicious"; // set all defaults desc to "delicious"



  }



}

int main() // a vector is an alternative to the one dimensional array.grows dynamically on its own. 
{
vector<MenuItem> wholeMenu;// name is wholeMenu
populateMenu(wholeMenu); //  put some default values in the menu
  return 0;
}