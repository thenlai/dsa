#include <stack>
#include <vector>

#include <iostream>

using std::cin;
using std::cout;
using std::endl;
using std::flush;
#define overflow 3;

void introductions()
{
  cout << "Please enter a valid command:" << endl
       << "[?]push to stack [=]print top" << endl
       << "[+][-][*][/] are arithmetic operations" << endl
       << "[Q]uit." << endl;
}

bool is_operator(char c)
{
  return (
      c == '?' || c == '=' || c == '+' || c == '-' ||
      c == '*' || c == '/' || c == 'q');
}

char get_command()
{
  char command;
  bool waiting = true;
  cout << "select comamnd and press <Enter> : ";
  while (waiting)
  {
    cin >> command;

    command = tolower(command);
    if (is_operator(command))
    {
      waiting = false;
    }
    else
    {
      introductions();
    }
  }
  return command;
}

bool do_command(char command, std::stack<double> &numbers)
{
  double p, q;
  switch (command)
  {
  case '?':
    cout << "Enter a real number: " << flush;
    cin >> p;
    numbers.push(p);

    // if(numbers.push(p) == overflow) {
    // 	cout << "warning: stack full, lost number" << endl;
    // }
    break;
  case '=':
    if (numbers.empty())
    {
      cout << "Stack empty" << endl;
    }
    else
    {
      p = numbers.top();
      cout << p << endl;
    }
    break;
  case '+':
    if (numbers.empty())
    {
      cout << "Stack empty" << endl;
    }
    else
    {
      p = numbers.top();
      numbers.pop();
      if (numbers.empty())
      {
        cout << "Stack has just one entry" << endl;
        numbers.push(p);
      }
      else
      {
        q = numbers.top();
        numbers.pop();
        numbers.push(q + p);
        cout << "\t" << q << " + " << p << " = " << p + q << endl;
        // if(numbers.push(q+p) == overflow) {
        // 	cout << "warning: Stack full, lost result" << endl;
        // }
      }
    }
    break;
  case '-':
    if (numbers.empty())
    {
      cout << "Stack empty" << endl;
    }
    else
    {
      p = numbers.top();
      numbers.pop();
      if (numbers.empty())
      {
        cout << "Stack has just one entry" << endl;
        numbers.push(p);
      }
      else
      {
        q = numbers.top();
        numbers.pop();
        numbers.push(q - p);
        cout << "\t" << q << " - " << p << " = " << p - q << endl;
      }
    }
    break;
  case '*':
    if (numbers.empty())
    {
      cout << "Stack empty" << endl;
    }
    else
    {
      p = numbers.top();
      numbers.pop();
      if (numbers.empty())
      {
        cout << "Stack has just one entry" << endl;
        numbers.push(p);
      }
      else
      {
        q = numbers.top();
        numbers.pop();
        numbers.push(q * p);
        cout << "\t" << q << " * " << p << " = " << p * q << endl;
      }
    }
    break;
  case '/':
    if (numbers.empty())
    {
      cout << "Stack empty" << endl;
    }
    else
    {
      p = numbers.top();
      numbers.pop();
      if (numbers.empty())
      {
        cout << "Stack has just one entry" << endl;
        numbers.push(p);
      }
      else
      {
        q = numbers.top();
        numbers.pop();
        if (p != 0)
        {
          numbers.push(q / p);
          cout << "\t" << q << " / " << p << " = " << p / q << endl;
        }
        else
        {
          numbers.push(0);
        }
      }
    }
    break;
  case 'q':
    cout << "Calculation finished.\n";
    if (numbers.size() >= 1)
    {
      cout << "result = " << numbers.top() << endl;
    }
    return false;
  }
  return true;
}

int main(void)
{
  std::stack<double> stored_numbers;
  introductions();
  //instrucitons();
  while (do_command(get_command(), stored_numbers))
    ;
  return 0;
}