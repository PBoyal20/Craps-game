#include <iostream>
#include <cstdlib>
#include <unistd.h>

using namespace std;

int die();
int playGame();
int rollDelay();

int main()
{
  int credits = 100, wager;
  char ans;
  bool done = false;
  while (!done)
  {
    cout << endl
    << "You have " << credits << " credits. Hows many credits would you like to wager? ";
    cin >> wager;

    if(wager/1 != wager){
      break;
    }

   


    if (wager > credits){

    cout<<"You don't have enough credits!"<<endl;
    break;
    
    }

    if (playGame() == 1)
      credits += wager;

    else
      credits -= wager;

    if (credits <= 0)
    {
      cout << "You are out of credits! Now you must come to the back room.." << endl;
      break;
    }
    
      

    cout << " Play again (y/n) ? ";
    cin >> ans;

    if (ans == 'n' || ans == 'N')
      done = true;
    else
      done = false;
  }
  return 0;
}

int die()
{
  int roll;
  roll = rand() % 6 + 1;
  return roll;
}

int rollDelay()
{
  int ms = 100000;
  usleep(5 * ms);

  return 0;
}

int playGame()
{

  string go, go_makePoint;
  int die1, die2, dieSum, point, credits = 100, wager;
  bool win;

  cout << "Type Go to roll you dice!" << endl;
  cin >> go;
  cout << endl;
  if (go == "go" || go == "GO")
  {

    die1 = die();
    die2 = die();
    dieSum = die1 + die2;

    cout << "Die #1: " << die1 << endl;
    rollDelay();
    cout << "Die #2: " << die2 << endl;
    rollDelay();

    cout << endl;

    if (dieSum == 7 || dieSum == 11)
    {
      cout << "You Win!" << endl;
      win = true;
    }
    else if (dieSum == 2 || dieSum == 3 || dieSum == 12)
    {
      cout << "Craps! You lose!" << endl;
    }
    else
    {

      point = dieSum;
      dieSum = 0;
      cout << "Your Player's Point is " << point << " keep rolling until your roll equals your point." << endl
           << " If you roll a 7, you Lose!" << endl;

      cout << endl
           << "Your point is: " << point << endl;

      cout << endl;

      cout << "Type Go to roll you dice!" << endl;
      cin >> go_makePoint;
      cout << endl;

      if (go_makePoint == "go" || go_makePoint == "GO")
      {
        while (dieSum != point)
        {
          die1 = die();

          die2 = die();
          dieSum = die1 + die2;

          cout << "You rolled a : " << die1 << " and a " << die2 << endl;
          rollDelay();
          rollDelay();

          if (dieSum == 7)
          {
            cout << endl;
            cout << "Craps! You lose!" << endl;

            break;
          }
          else if (dieSum == point)
          {

            cout << endl
                 << "You Win!" << endl;
            win = true;

            break;
          }
        }
      }
    }
  }
  if (win == true)
    return 1;
  else
    return 0;
}