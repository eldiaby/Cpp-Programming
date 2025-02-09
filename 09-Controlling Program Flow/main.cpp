#include <iostream>
#include <vector>
using namespace std;
int main() {

  char user_selection {};
  vector<int> data{};

  do
  {
    // 1) Display the menu
    cout << "\nP - Print numbers" << endl;
    cout << "A - Add a number" << endl;
    cout << "M - Display mean of the numbers" << endl;
    cout << "S - Display the smallest number" << endl;
    cout << "L - Display the largest number" << endl;
    cout << "Q - Quite" << endl;
    cout << "\nEnter you choice: ";

    // 2) Get the user input
    cin >> user_selection;

    // 3) ckeck the user operation need to process
    if (user_selection == 'p' || user_selection == 'P') {
      if (data.size() == 0)
        cout << "[] - the data is empty"<< endl;
      else {
      cout << "[ ";
      for (auto item : data)
        cout << item << " ";
      cout << "]" << endl;
    }
  }
  else if (user_selection == 'a' || user_selection == 'A') { 
    int user_input{};
    cout << "Enter an integer number to add to add to the list: ";
    cin >> user_input;
    data.push_back(user_input);
    cout << user_input <<" added to the data list" << endl;
  } 
  else if (user_selection == 'm' || user_selection=='M') {
    if (data.size() == 0) {
      cout << "Sorry, the list is empty"<< endl;
    }
    else
    {
      int total{};
      for (auto item: data)
        total += item;
      double mean = (double)total / data.size();
      cout << "the mean is: " << mean << endl;
    }
  }
  else if (user_selection == 's' || user_selection == 'S') {
      if (data.size() == 0)  {
        cout << "the list is empty" << endl;
      } else {
    int smallest_num{data[0]};
    for (auto item: data)
      if (smallest_num > item)
        smallest_num = item;

    cout << "the smallest number is: " << smallest_num << endl;
      }
  }
  else if (user_selection == 'l' || user_selection == 'L') {
    if (data.size() == 0)  {
      cout << "the list is empty" << endl;
    } else {
  int largest_num{data[0]};
  for (auto item: data)
    if (largest_num < item)
      largest_num = item;

  cout << "the largest number is: " << largest_num << endl;
    }
  } else if (user_selection == 'q' || user_selection == 'Q') {
    cout << "Goodbey..." << endl;
  } else {
    cout << "Unknowning selection, Please try agian...." << endl;
  }

  } while (user_selection != 'q' && user_selection != 'Q');
  return 0;
}