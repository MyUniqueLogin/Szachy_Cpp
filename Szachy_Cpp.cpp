#include <iostream>
#include <vector>
#include "Figury/Figury.h"
#include "plansza8x8/Plansza.h"

//makrodef testowe
#define XX 4
#define YY 8
#define TEAM 0


using std::cout;
using std::endl;

int main()
{
	Plansza plansza1(8, 8);
	int i, n;
	plansza1.set_object(XX,YY,TEAM,Pionek);
	plansza1.set_object(XX+1,YY-1,TEAM,Pionek);
	i = plansza1.get_object(XX,YY).get_possible_move();
	cout << endl << "Ruch: "<< i << endl;

	if(plansza1.get_object(XX,YY).get_type()!=Skoczek)
	{
		n = plansza1.get_object(XX,YY).get_elongation_move(7);
		cout<< n << " ";
		n = plansza1.get_object(XX,YY).get_elongation_move(0);
		cout<< n << " ";
		n = plansza1.get_object(XX,YY).get_elongation_move(1);
		cout<< n << "\n";

		n = plansza1.get_object(XX,YY).get_elongation_move(6);
		cout<< n << " ";
		cout<< " " << " ";
		n = plansza1.get_object(XX,YY).get_elongation_move(2);
		cout<< n << "\n";

		n = plansza1.get_object(XX,YY).get_elongation_move(5);
		cout<< n << " ";
		n = plansza1.get_object(XX,YY).get_elongation_move(4);
		cout<< n << " ";
		n = plansza1.get_object(XX,YY).get_elongation_move(3);
		cout<< n << "\n";
	}
	else
	{
		n = plansza1.get_object(XX,YY).get_elongation_move(0);
		cout<< " " << n << " ";
		n = plansza1.get_object(XX,YY).get_elongation_move(1);
		cout<< n << "\n";
		n = plansza1.get_object(XX,YY).get_elongation_move(7);
		cout<< n << "   ";
		n = plansza1.get_object(XX,YY).get_elongation_move(2);
		cout<< n << "\n";
		n = plansza1.get_object(XX,YY).get_elongation_move(6);
		cout<< n << "   ";
		n = plansza1.get_object(XX,YY).get_elongation_move(3);
		cout<< n << "\n";
		n = plansza1.get_object(XX,YY).get_elongation_move(5);
		cout<< " " << n << " ";
		n = plansza1.get_object(XX,YY).get_elongation_move(4);
		cout<< n << "\n";
	}
	return 0;
}
//ok

