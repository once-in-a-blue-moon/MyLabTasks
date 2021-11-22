#include <iostream>
#include <cmath>
#define _USE_MATH_DEFINES
using namespace std;


const double pi = 3.14159265358979323846;

double integral_1(int k);
double integral_2(int beginning, int end, int k);
double result(int a, int b, int n);

int main(){
	cout << "calculate sum of two integrals" << endl;
	int a, b, n;
	cout << "Enter a = "; cin >> a;
	cout << "Enter b = "; cin >> b;
	cout << "Enter n = "; cin >> n;
	cout << "integral 1 = " << integral_1(n) << endl; //значення інтеграла від 0 до pi
	cout << "integral 2 = " << integral_2(a, b, n) << endl; //значення інтеграла від a до b
	cout << "Result = " << result(a, b, n); //значення шуканого виразу
}

double integral_1(int k) {
	//для знаходження першого інтеграла використаємо подану формулу, де замість a і b буде 0 і pi відповідно
	double sum = 0;
	double h = pi / k;
	for (int i = 1; i <= k; i++) {
		double x, f;
		x = i * h - h / 2; //значення х-ітого на даному кроці
		f = log(2 + sin(x)); //значення f від х-ітого на даному кроці
		sum = sum + f; //сума всіх f(x) від 1 до k
	}
	return (h * sum);
}
double integral_2(int beginning, int end, int k) {
	//для знаходження першого інтеграла використаємо подану формулу
	double sum = 0;
	double h = (float)(end - beginning) / k; //знаходження h для формули
	for (int i = 1; i <= k; i++) {
		double x, f;
		x = beginning + i * h - h / 2;
		f = pow(atan(x), 2);
		sum = sum + f;
	}
	return (h * sum);
}
double result(int a, int b, int n) {
	double res = integral_1(n) + integral_2(a, b, n);
	return res;
}