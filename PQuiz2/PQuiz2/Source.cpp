#include <iostream>
using namespace std;
#include <string>
int main() {

	int  tea = 0, cocoa = 0, water = 0;

	char input; //For user input

	cout << "Hows was the weather? (s)unny (r)ainy (c)loudy " << endl;;
	cin >>input;
	if (input == 's')
		water += 2;
	else if (input == 'r')
		tea += 2;
	else if (input == 'c')
		cocoa += 2;


	cout << "What time is it? (m)orning (e)vening (n)ight"<<endl;
	cin >> input;
	if (input == 'm')
		  tea += 3;
	else if (input == 'e')
		 water += 3;
	else if (input == 'n')
		  cocoa += 3;


	cout << "How ya doin? (o)k (g)reat! (w)hatever" << endl;
	cin >> input;
	if (input == 'o')
		 tea += 2;
	else if (input == 'g')
		 water += 2;
	else if (input == 'w')
		 cocoa += 2;
	

	if (( water > tea ) && ( water > cocoa ) )
		cout << "a cup of water for you" << endl;
	else if (( tea > water ) && ( tea > cocoa ) ) 
		cout << "ya prolly need tea" << endl;
	else if (( cocoa > water ) && (cocoa > tea ) )
		cout << "you could use some cocoa my friend" << endl;






}