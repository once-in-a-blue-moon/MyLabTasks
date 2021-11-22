#include <iostream>
#include <cmath>
using namespace std;

int a, b, n;
const double pi = 3.14159265358979323846;

double integral_1(int);
double integral_2(int, int, int);
double result();

int main(){
	cout << "calculate sum of two integrals" << endl;
	cout << "Enter a = "; cin >> a;
	cout << "Enter b = "; cin >> b;
	cout << "Enter n = "; cin >> n;
	cout << "integral 1 = " << integral_1(n) << endl; //значення інтеграла від 0 до pi
	cout << "integral 2 = " << integral_2(a, b, n) << endl; //значення інтеграла від a до b
	cout << "Result = " << result(); //значення шуканого виразу
}

double integral_1(int m) {
	//для знаходження першого інтеграла використаємо подану формулу, де замість a і b буде 0 і pi відповідно
	double sum = 0;
	double h = pi / m;
	for (int i = 1; i <= m; i++) {
		double x, f;
		x = i * h - h / 2; //значення х-ітого на даному кроці
		f = log(2 + sin(x)); //значення f від х-ітого на даному кроці
		sum = sum + f; //сума всіх f(x) від 1 до k
	}
	return (h * sum);
}
double integral_2(int beginning, int end, int k) {
	//для знаходження першого інтеграла використаємо подану формулу
	double sum2 = 0;
	double h2 = (double)(end - beginning) / k; //знаходження h для формули
	for (int j = 1; j <= k; j++) {
		double x2, f2;
		x2 = beginning + j * h2 - h2 / 2;
		f2 = pow(atan(x2), 2);
		sum2 = sum2 + f2;
	}
	return (h2 * sum2);
}
double result() {
	double res = integral_1(n) + integral_2(a, b, n);
	return res;
}