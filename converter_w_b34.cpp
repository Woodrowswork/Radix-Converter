/*
 * converter.cpp
 *
 *  Created on: May 1, 2015
 *      Author: sephiroth
 */

#include <string>
#include <iostream>
#include <stack>
#include <stdlib.h>

using namespace std;

void changeBase(int num, int base);

int main (int argc, char *argv[])
{
	int input,
		newbase;

	input = atoi(argv[1]);
	newbase = atoi(argv[2]);

	cout << input << " base 10" << endl;
/*
	some test code
	cout << "what is the input?" << endl;
	cin >> input;
	cout << "what is the new base?" << endl;
	cin >> newbase;
	*/

	changeBase(input, newbase);

	return 0;

}
/*
 * pretty straightforward conversion the mod is pushed onto the stack and the
 * number is left for continued processing. If the new base allows for value > 9
 * a switch statement is in place to cover up to 15.
 */

void changeBase(int num, int base)
{
	int top,
		remainder = num;
	stack <int> numberstack;

	while (remainder!=0)
	{
		numberstack.push(remainder % base);
		remainder = remainder/base;
	}

	while (!numberstack.empty())
	{
		top = numberstack.top();
		numberstack.pop();
		if (top < 9)
		      {
		         cout << top;
		      }

		      else if (top > 9)
		      {
		         switch (top)
		         {
		            case 10:
		            {
		               cout << "A";
		               break;
		            }
		            case 11:
		            {
		               cout << "B";
		               break;
		            }
		            case 12:
		            {
		               cout << "C";
		               break;
		            }
		            case 13:
		            {
		               cout << "D";
		               break;
		            }
		            case 14:
		            {
		               cout << "E";
		               break;
		            }
		            case 15:
		            {
		               cout << "F";
		               break;
		            }
		            default:
		            {
		               cout << "error";
		               break;
		            }
		         }
		      }
	}
	cout << " base - " << base <<  endl;
}

