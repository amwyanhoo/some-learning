class Fraction{
private:
	int a;
	int b;

	int divisor(int p,int q);
public:
	Fraction();
	Fraction(int a,int b);
	Fraction(Fraction &c);

	void set(int a,int b);
	void show();
	Fraction add(Fraction b);

};
