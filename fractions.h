#pragma once
class fractions
{
private:
	int numerator;
	int denominator;
	int x;
	int y;
	int k;
	string st;
public:
	fractions(int n, int d)
	{
		this->numerator = n;
		this->denominator = d;
	}
	int getNumerator()
	{
		return numerator;
	}
	int getDenominator()
	{
		return denominator;
	}
	int getX()
	{
		return x;
	}
	int getY()
	{
		return y;
	}

	void summa(fractions point2)
	{
		
		x = (numerator * point2.getDenominator() + denominator * point2.getNumerator());
		y = denominator * point2.getDenominator();
		st = " summa ";
		transformation(x, y);
	}
	void subtraction(fractions point2)
	{
		x = (numerator * point2.getDenominator() - denominator * point2.getNumerator());
		y = denominator * point2.getDenominator();
		st = " subtraction ";
		transformation(x, y);
	}
	void multiplication(fractions point2)
	{
		x = (numerator * point2.getNumerator());
		y = denominator * point2.getDenominator();
		st = " multiplication ";
		transformation(x, y);
	}
	void division(fractions point2)
	{
		x = (numerator * point2.getDenominator());
		y = denominator * point2.getNumerator();
		st = " division ";
		transformation(x, y);
	}
	void transformation(int x,int y)
	{

		if (x == y ) {
			cout << "result"<<st<<" = " << 1;
		}
		else if (x > y) {
			if (x % y == 0) {
				cout << "result" << st << " = " << x / y;
			}
			else {
				k = 0;
				for (int i = 2; i <= y; i++)
				{
					if (x % i == 0 && y % i == 0) {
						k = i;
					}
				}
				if (k > 0) {
					x = x / k;
					y = y / k;
					cout << "result" << st << " = " << x / y << " * " << x - (y * (x / y)) << " / " << y;
				}
				else {
					cout << "result" << st << " = " << x << " / " << y;
				}
			}
		}
		else if (x < y) {
			if (x % y == 0)
				cout << "result" << st << " = " << 1 << " / " << y / x;
			else {
				 k=0;
				 if (x < 0) {
					 for (int i = x; i < -1; i++)
					 {

						 if (x % i == 0 && y % i == 0) {
							 k = i;
							 k *= -1;
							 break;
						 }
					 }
				 }
				 else {
					 for (int i = 2; i <= x; i++)
					 {

						 if (x % i == 0 && y % i == 0) {
							 k = i;
						 }
					 }
				 }
				if (k > 0) {
					x = x / k;
					y = y / k;
					cout << "result" << st << " = " << x << " / " << y ;
				}
				else cout << "result" << st << " = " << x << " / " << y;
			}
		}
	}
};

