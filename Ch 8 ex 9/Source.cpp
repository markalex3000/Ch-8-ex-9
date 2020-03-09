/*  Program Description
Write a function that given two vector<double>s price and weight computes a value (an “index
that is the sum of all price[i]*weight[i]. Make sure to have weight.size()==price.size().
*/

/*
Standard opening
*/

#include "C:\Users\mark.alexieff\source\repos\std_lib_facilities.h"

/*
global variables
*/

vector<double> price;
vector<double> weight;



/*
functions declarations
*/

double calc_index(vector<double>& p, vector<double>& w);


/*
main
*/

int main() {
	double temp_price{ 0 };
	double temp_weight{ 0 };
	int count{ 0 };
	cout << "Enter a series of prices (999 to exit):";
	cin >> temp_price;
	while (temp_price != 999) {
		count++;
		price.push_back(temp_price);
		cin >> temp_price;
	}

	cout << "\n" << "Enter a weight for each price...";
	for (double p : price) {
		cout << "Weight for price " << p << "is? > ";
		cin >> temp_weight;
		weight.push_back(temp_weight);
		cout << "\n";
	}

	cout << "The index = " << calc_index(price, weight) << "\n";
	keep_window_open();
}


/*
funcion definitions
*/

double calc_index(vector<double>& p, vector<double>& w) {
	auto w_itr = w.begin();
	double index{ 0 };
	for (double p : p) {
		index += p * *w_itr++;
	}
	return index;
}

