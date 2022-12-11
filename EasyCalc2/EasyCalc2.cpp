#include <iostream>
using namespace std;

int main()
{
	int seleccionar, seleccionarDer, seleccionarOp, pickCant;
	string pregFinal;
	double n, a, b, c, u, v, w, j, k, l;
	inicio:
	system("cls");
	cout << "____________________________________________________" << endl;
	cout << "Bienvenido a EasyCalc, te ayudamos con tus calculos.\n";
	cout << "____________________________________________________" << endl;
	cout << "Escoge una opcion (escribe 1, 2, 3 o 4)\n";
	cout << "1. Derivada algebraica\n";
	cout << "2. Derivada logaritmica\n";
	cout << "3. Derivada trigonometrica\n";
	cout << "4. Derivada exponencial\n";
	cout << "5. Salir\n";
	cout << "----------------------------------------------------" << endl;
	cin >> seleccionarDer;

		if (seleccionarDer == 1) {
			cout << "\n____________________________________________________" << endl;
			cout << "Escoge una de las dos formas (escribe 1 o 2)\n";
			cout << "1. Forma a(x)^n\n";
			cout << "2. Forma a(x)^n + bx + c\n";
			cout << "3. Volver al inicio\n";
			cout << "----------------------------------------------------" << endl;
			cin >> seleccionarOp;
			switch (seleccionarOp)
			{
			case 1:
			{
				cout << "\nInserte el valor de a: "; cin >> a;
				cout << "Inserte el valor de n: "; cin >> n;
				if (n != 1 or n != 0) { cout << "La derivada es: " << a * n << "(x)^" << (n - 1); }
				else { cout << "La derivada es: " << a * n; }
				break;
			}
			case 2:
			{
				cout << "\nInserte el valor de a: "; cin >> a;
				cout << "Inserte el valor de b: "; cin >> b;
				cout << "Inserte el valor de c: "; cin >> c;
				cout << "Inserte el valor de n: "; cin >> n;
				if (b < 0) { cout << "La derivada es: " << a * n << "(x)^" << (n - 1) << b; }
				else if (b > 0) { cout << "La derivada es: " << a * n << "(x)^" << (n - 1) << " + " << b; }
				break;
			}
			case 3:
			{
				goto inicio;
				break;
			}
			}
		}
		else if (seleccionarDer == 2) {
			cout << "\n____________________________________________________" << endl;
			cout << "Escoge una de las dos formas (escribe 1 o 2)\n";
			cout << "1. Forma aln(u)^n\n";
			cout << "2. Forma loga(u)\n";
			cout << "3. Volver al inicio\n";
			cout << "----------------------------------------------------" << endl;
			cin >> seleccionarOp;
			switch (seleccionarOp)
			{
			case 1:
			{
				cout << "\n¿Cuantos terminos tiene u? (1, 2 o 3)\n"; cin >> pickCant;
				if (pickCant == 1) {
					cout << "\nInserte el valor de a: "; cin >> a;
					cout << "Inserte el valor de u(x) (sin la x): "; cin >> u;
					cout << "Inserte el exponente de u: "; cin >> j;
					cout << "Inserte el valor de n: "; cin >> n;
					cout << "La derivada es: " << a << " x " << n * u * j << "(x)^" << (j - 1) << "/" << u << "(x)";
				}
				else if (pickCant == 2) {
					cout << "\nInserte el valor de a: "; cin >> a;
					cout << "Inserte el valor de u(x) (sin la x): "; cin >> u;
					cout << "Inserte el valor de v(x) (sin la x): "; cin >> v;
					cout << "Inserte el exponente de u: "; cin >> j;
					cout << "Inserte el exponente de v: "; cin >> k;
					cout << "Inserte el valor de n: "; cin >> n;
					
					if (v > 0) {
						if (j != 1 && k != 1) { cout << "La derivada es: " << a << " x " << n * u * j << "(x)^" << (j - 1) << " + " << n * v * k << "(x)^" << (k - 1) << "/" << u << "(x)^" << j << " + " << v << "(x)^" << k; }
						else if (j == 1 && k != 1) { cout << "La derivada es: " << a << " x " << n * u * j << " + " << n * v * k << "(x)^" << (k - 1) << "/" << u << "(x)" << " + " << v << "(x)^" << k; }
						else if (j != 1 && k == 1) { cout << "La derivada es: " << a << " x " << n * u * j << "(x)^" << (j - 1) << " + " << n * v * k << "/" << u << "(x)^" << j << " + " << v << "(x)"; }
						else if (j != 1 && k != 1) { cout << "La derivada es: " << a << " x " << n * u * j << "(x)^" << (j - 1) << " + " << n * v * k << "(x)^" << (k - 1) << "/" << u << "(x)^" << j << " + " << v << "(x)^" << k; }
						else if (j != 1 && k == 1) { cout << "La derivada es: " << a << " x " << n * u * j << "(x)^" << (j - 1) << " + " << n * v * k << "/" << u << "(x)^" << j << " + " << v << "(x)"; }
						else if (j == 1 && k != 1) { cout << "La derivada es: " << a << " x " << n * u * j << " + " << n * v * k << "(x)^" << (k - 1) << "/" << u << "(x)" << " + " << v << "(x)^" << k; }
						else if (j == 1 && k == 1) { cout << "La derivada es: " << a << " x " << n * u * j << " + " << n * v * k << "/" << u << "(x)" << " + " << v << "(x)"; }
					}
					else if (v < 0) {
						if (j != 1 && k != 1) { cout << "La derivada es: " << a << " x " << n * u * j << "(x)^" << (j - 1) << n * v * k << "(x)^" << (k - 1) << "/" << u << "(x)^" << j << v << "(x)^" << k; }
						else if (j == 1 && k != 1) { cout << "La derivada es: " << a << " x " << n * u * j << " + " << n * v * k << "(x)^" << (k - 1) << "/" << u << "(x)" << v << "(x)^" << k; }
						else if (j != 1 && k == 1) { cout << "La derivada es: " << a << " x " << n * u * j << "(x)^" << (j - 1) << n * v * k << "/" << u << "(x)^" << j << v << "(x)"; }
						else if (j != 1 && k != 1) { cout << "La derivada es: " << a << " x " << n * u * j << "(x)^" << (j - 1) << n * v * k << "(x)^" << (k - 1) << "/" << u << "(x)^" << j << v << "(x)^" << k; }
						else if (j != 1 && k == 1) { cout << "La derivada es: " << a << " x " << n * u * j << "(x)^" << (j - 1) << n * v * k << "/" << u << "(x)^" << j << v << "(x)"; }
						else if (j == 1 && k != 1) { cout << "La derivada es: " << a << " x " << n * u * j << n * v * k << "(x)^" << (k - 1) << "/" << u << "(x)" << v << "(x)^" << k; }
						else if (j == 1 && k == 1) { cout << "La derivada es: " << a << " x " << n * u * j << n * v * k << "/" << u << "(x)" << v << "(x)"; }
					}
				}

				else if (pickCant == 3) {
					cout << "\nInserte el valor de a: "; cin >> a;
					cout << "Inserte el valor de u(x) (sin la x): "; cin >> u;
					cout << "Inserte el valor de v(x) (sin la x): "; cin >> v;
					cout << "Inserte el valor de w(x) (sin la x): "; cin >> w;
					cout << "Inserte el exponente de u: "; cin >> j;
					cout << "Inserte el exponente de v: "; cin >> k;
					cout << "Inserte el exponente de w: "; cin >> l;
					cout << "Inserte el valor de n: "; cin >> n;
					if (v > 0 && w > 0) {
						if (j != 1 && k != 1 && l != 1) {
							cout << "La derivada es: " << a << " x " << n * u * j << "(x)^" << (j - 1) << " + " << n * v * k << "(x)^" << (k - 1) << " + " << n * w * l << "(x)^" << (l - 1) << "/" << u << "(x)^" << j << " + " << v << "(x)^" << k << " + " << w << "(x)^" << l;
						}
						else if (j == 1 && k != 1 && l != 1) { cout << "La derivada es: " << a << " x " << n * u * j << " + " << n * v * k << "(x)^" << (k - 1) << " + " << n * w * l << "(x)^" << (l - 1) << "/" << u << "(x)" << " + " << v << "(x)^" << " + " << w << "(x)^" << l; }
						else if (j != 1 && k == 1 && l != 1) { cout << "La derivada es: " << a << " x " << n * u * j << "(x)^" << (j - 1) << " + " << n * v * k << " + " << n * w * l << "(x)^" << (l - 1) << "/" << u << "(x)^" << j << " + " << v << "(x)" << " + " << w << "(x)^" << l; }
						else if (j != 1 && k != 1 && l == 1) { cout << "La derivada es: " << a << " x " << n * u * j << "(x)^" << (j - 1) << " + " << n * v * k << "(x)^" << (k - 1) << " + " << n * w * l << "/" << u << "(x)^" << j << " + " << v << "(x)^" << k << " + " << w << "(x)"; }
						else if (j != 1 && k == 1 && l == 1) { cout << "La derivada es: " << a << " x " << n * u * j << "(x)^" << (j - 1) << " + " << n * v * k << " + " << n * w * l << "/" << u << "(x)^" << j << " + " << v << "(x)" << " + " << w << "(x)"; }
						else if (j == 1 && k != 1 && l == 1) { cout << "La derivada es: " << a << " x " << n * u * j << " + " << n * v * k << "(x)^" << (k - 1) << " + " << n * w * l << "/" << u << "(x)" << " + " << v << "(x)^" << k << " + " << w << "(x)"; }
						else if (j == 1 && k == 1 && l != 1) { cout << "La derivada es: " << a << " x " << n * u * j << " + " << n * v * k << " + " << n * w * l << "(x)^" << (l - 1) << "/" << u << "(x)" << " + " << v << "(x)" << " + " << w << "(x)^" << l; }
						else if (v < 0 && w < 0) {
							if (j != 1 && k != 1 && l != 1) { cout << "La derivada es: " << a << " x " << n * u * j << "(x)^" << (j - 1) << n * v * k << "(x)^" << (k - 1) << n * w * l << "(x)^" << (l - 1) << "/" << u << "(x)^" << j << " + " << v << "(x)^" << k << w << "(x)^" << l; }
							else if (j == 1 && k != 1 && l != 1) { cout << "La derivada es: " << a << " x " << n * u * j << n * v * k << "(x)^" << (k - 1) << n * w * l << "(x)^" << (l - 1) << "/" << u << "(x)" << " + " << v << "(x)^" << " + " << w << "(x)^" << l; }
							else if (j != 1 && k == 1 && l != 1) { cout << "La derivada es: " << a << " x " << n * u * j << "(x)^" << (j - 1) << n * v * k << n * w * l << "(x)^" << (l - 1) << "/" << u << "(x)^" << j << " + " << v << "(x)" << w << "(x)^" << l; }
							else if (j != 1 && k != 1 && l == 1) { cout << "La derivada es: " << a << " x " << n * u * j << "(x)^" << (j - 1) << n * v * k << "(x)^" << (k - 1) << n * w * l << "/" << u << "(x)^" << j << " + " << v << "(x)^" << k << w << "(x)"; }
							else if (j != 1 && k == 1 && l == 1) { cout << "La derivada es: " << a << " x " << n * u * j << "(x)^" << (j - 1) << n * v * k << n * w * l << "/" << u << "(x)^" << j << v << "(x)" << w << "(x)"; }
							else if (j == 1 && k != 1 && l == 1) { cout << "La derivada es: " << a << " x " << n * u * j << n * v * k << "(x)^" << (k - 1) << n * w * l << "/" << u << "(x)" << v << "(x)^" << k << w << "(x)"; }
							else if (j == 1 && k == 1 && l != 1) { cout << "La derivada es: " << a << " x " << n * u * j << n * v * k << n * w * l << "(x)^" << (l - 1) << "/" << u << "(x)" << v << "(x)" << w << "(x)^" << l; }
						}
						else if (v < 0 && w > 0) {
							if (j != 1 && k != 1 && l != 1) { cout << "La derivada es: " << a << " x " << n * u * j << "(x)^" << (j - 1) << " + " << n * v * k << "(x)^" << (k - 1) << n * w * l << "(x)^" << (l - 1) << "/" << u << "(x)^" << j << v << "(x)^" << k << " + " << w << "(x)^" << l; }
							else if (j == 1 && k != 1 && l != 1) { cout << "La derivada es: " << a << " x " << n * u * j << n * v * k << "(x)^" << (k - 1) << " + " << n * w * l << "(x)^" << (l - 1) << "/" << u << "(x)" << v << "(x)^" << " + " << " + " << w << "(x)^" << l; }
							else if (j != 1 && k == 1 && l != 1) { cout << "La derivada es: " << a << " x " << n * u * j << "(x)^" << (j - 1) << n * v * k << " + " << n * w * l << "(x)^" << (l - 1) << "/" << u << "(x)^" << j << v << "(x)" << " + " << w << "(x)^" << l; }
							else if (j != 1 && k != 1 && l == 1) { cout << "La derivada es: " << a << " x " << n * u * j << "(x)^" << (j - 1) << n * v * k << "(x)^" << (k - 1) << " + " << n * w * l << "/" << u << "(x)^" << j << v << "(x)^" << k << " + " << w << "(x)"; }
							else if (j != 1 && k == 1 && l == 1) { cout << "La derivada es: " << a << " x " << n * u * j << "(x)^" << (j - 1) << n * v * k << " + " << n * w * l << "/" << u << "(x)^" << j << v << "(x)" << " + " << w << "(x)"; }
							else if (j == 1 && k != 1 && l == 1) { cout << "La derivada es: " << a << " x " << n * u * j << n * v * k << "(x)^" << (k - 1) << " + " << n * w * l << "/" << u << "(x)" << v << "(x)^" << k << " + " << w << "(x)"; }
							else if (j == 1 && k == 1 && l != 1) { cout << "La derivada es: " << a << " x " << n * u * j << n * v * k << " + " << n * w * l << "(x)^" << (l - 1) << "/" << u << "(x)" << v << "(x)" << " + " << w << "(x)^" << l; }
						}
						else if (v > 0 && w < 0) {
							if (j != 1 && k != 1 && l != 1) { cout << "La derivada es: " << a << " x " << n * u * j << "(x)^" << (j - 1) << " + " << n * v * k << "(x)^" << (k - 1) << n * w * l << "(x)^" << (l - 1) << "/" << u << "(x)^" << j << " + " << v << "(x)^" << k << w << "(x)^" << l; }
							else if (j == 1 && k != 1 && l != 1) { cout << "La derivada es: " << a << " x " << n * u * j << " + " << n * v * k << "(x)^" << (k - 1) << n * w * l << "(x)^" << (l - 1) << "/" << u << "(x)" << " + " << v << "(x)^" << " + " << w << "(x)^" << l; }
							else if (j != 1 && k == 1 && l != 1) { cout << "La derivada es: " << a << " x " << n * u * j << "(x)^" << (j - 1) << " + " << n * v * k << n * w * l << "(x)^" << (l - 1) << "/" << u << "(x)^" << j << " + " << v << "(x)" << w << "(x)^" << l; }
							else if (j != 1 && k != 1 && l == 1) { cout << "La derivada es: " << a << " x " << n * u * j << "(x)^" << (j - 1) << " + " << n * v * k << "(x)^" << (k - 1) << n * w * l << "/" << u << "(x)^" << j << " + " << v << "(x)^" << k << w << "(x)"; }
							else if (j != 1 && k == 1 && l == 1) { cout << "La derivada es: " << a << " x " << n * u * j << "(x)^" << (j - 1) << " + " << n * v * k << n * w * l << "/" << u << "(x)^" << j << " + " << v << "(x)" << w << "(x)"; }
							else if (j == 1 && k != 1 && l == 1) { cout << "La derivada es: " << a << " x " << n * u * j << " + " << n * v * k << "(x)^" << (k - 1) << n * w * l << "/" << u << "(x)" << " + " << v << "(x)^" << k << w << "(x)"; }
							else if (j == 1 && k == 1 && l != 1) { cout << "La derivada es: " << a << " x " << n * u * j << " + " << n * v * k << n * w * l << "(x)^" << (l - 1) << "/" << u << "(x)" << " + " << v << "(x)" << w << "(x)^" << l; }
						}
					}
				}
				break;
			}
			case 2:
			{
				cout << "\nInserte el valor de a (coloque 0 si desea dejarla vacia): "; cin >> a;
				cout << "Inserte el valor de u(x) (sin la x): "; cin >> u;
				cout << "Inserte el exponente de u: "; cin >> j;
				if (a != 0) { cout << "La derivada es: " << u * j << "(x)^" << (j - 1) << "/" << u << "ln(" << a << ")"; }
				else { cout << "La derivada es: " << j << "(x)^" << (j - 1) << "/" << u << "ln(" << 10 << ")"; }
				break;
			}
			case 3:
			{
				goto inicio;
				break;
			}
			}
			}

		else if (seleccionarDer == 3) {
			cout << "\n____________________________________________________" << endl;
			cout << "Escoge una de las dos formas (escribe 1 o 2)\n";
			cout << "1. Forma asin(u)\n";
			cout << "2. Forma acos(u)\n";
			cout << "3. Forma atan(u)\n";
			cout << "4. Forma acsc(u)\n";
			cout << "5. Forma acot(u)\n";
			cout << "6. Forma asec(u)\n";
			cout << "7. Volver al inicio\n";
			cout << "----------------------------------------------------" << endl;
			cin >> seleccionarOp;
			switch (seleccionarOp)
			{
			case 1:
			{
				cout << "\nInserte el valor de a: "; cin >> a;
				cout << "Inserte el valor de u(x) (sin la x): "; cin >> u;
				cout << "Inserte el exponente de u: "; cin >> j;
				if (j != 1) { cout << "La derivada de seno es: " << a * u << "(x)^" << (j - 1) << "cos(" << u << "x^" << j << ")"; }
				else { cout << "La derivada de seno es: " << a * u << "cos(" << u << "x)"; }
				break;
			}
			case 2:
			{
				cout << "\nInserte el valor de a: "; cin >> a;
				cout << "Inserte el valor de u(x) (sin la x): "; cin >> u;
				cout << "Inserte el exponente de u: "; cin >> j;
				if (j != 1) { cout << "La derivada de coseno es: " << "-" << a * u << "(x)^" << (j - 1) << "sin(" << u << "x^" << j << ")"; }
				else { cout << "La derivada de coseno es: " << "-" << a * u << "sin(" << u << "x)"; }
				break;
				break;
			}
			case 3:
			{
				cout << "\nInserte el valor de a: "; cin >> a;
				cout << "Inserte el valor de u(x) (sin la x): "; cin >> u;
				cout << "Inserte el exponente de u: "; cin >> j;
				if (j != 1) { cout << "La derivada de tangente es: " << a * u << "(x)^" << (j - 1) << "sec^2(" << u << "x^" << j << ")"; }
				else { cout << "La derivada de tangente es: " << a * u << "sec^2(" << u << "x)"; }
				break;
			}
			case 4:
			{
				cout << "\nInserte el valor de a: "; cin >> a;
				cout << "Inserte el valor de u(x) (sin la x): "; cin >> u;
				cout << "Inserte el exponente de u: "; cin >> j;
				if (j != 1) { cout << "La derivada de cosecante es: " << "-" << a * u << "(x)^" << (j - 1) << "csc(" << u << "x^" << j << ")" << "cot(" << u << "x^" << j << ")"; }
				else { cout << "La derivada de cosecante es: " << "-" << a * u << "csc(" << u << "x)" << "cot(" << u << "x)"; }
				break;
			}
			case 5:
			{
				cout << "\nInserte el valor de a: "; cin >> a;
				cout << "Inserte el valor de u(x) (sin la x): "; cin >> u;
				cout << "Inserte el exponente de u: "; cin >> j;
				if (j != 1) { cout << "La derivada de cotangente es: " << "-" << a * u << "(x)^" << (j - 1) << "csc^2(" << u << "x^" << j << ")"; }
				else { cout << "La derivada de cotangente es: " << "-" << a * u << "csc^2(" << u << "x)"; }
				break;
			}
			case 6:
			{
				cout << "Inserte el valor de a: "; cin >> a;
				cout << "Inserte el valor de u(x) (sin la x): "; cin >> u;
				cout << "Inserte el exponente de u: "; cin >> j;
				if (j != 1) { cout << "La derivada de secante es: " << a * u << "(x)^" << (j - 1) << "sec(" << u << "x^" << j << ")" << "tan(" << u << "x^" << j << ")"; }
				else { cout << "La derivada de secante es: " << a * u << "sec(" << u << "x)" << "tan(" << u << "x)"; }
				break;
				break;
			}
			case 7:
			{
				goto inicio;
				break;
			}
			}
		}
		else if (seleccionarDer == 4) {
			cout << "\n____________________________________________________" << endl;
			cout << "Escoge una de las dos formas (escribe 1 o 2)\n";
			cout << "1. Forma a^n\n";
			cout << "2. Forma ae^n\n";
			cout << "3. Volver al inicio\n";
			cout << "----------------------------------------------------" << endl;
			cin >> seleccionarOp;
			switch (seleccionarOp)
			{
			case 1:
			{
				cout << "\nInserte el valor de a: "; cin >> a;
				cout << "Inserte el valor de u (sin x): "; cin >> u;
				cout << "Inserte el exponente de u: "; cin >> j;
				if (j != 1) { cout << "La derivada es: " << u * j * a << "(x^)" << (j - 1)*u << "(x)" << "^" << j << "ln(" << a << ")"; }
				else { cout << "La derivada es: " << u * j * a << "^" << u << "(x)" << "ln(" << a << ")"; }
				break;
				break;
			}
			case 2:
			{
				cout << "\nInserte el valor de a: "; cin >> a;
				cout << "Inserte el valor de u (sin x): "; cin >> u;
				cout << "Inserte el exponente de u: "; cin >> j;
				if (j != 1) { cout << "La derivada es: " << u * j * a << ("x^") << (j-1) << "e^" << u << "(x)" << "^" << j; }
				else { cout << "La derivada es: " << u * j * a << "e" << "^" << u << "(x)"; }
				break;
			}
			case 3:
			{
				goto inicio;
				break;
			}
		}	
		}
		else if (seleccionarDer == 5) {
			cout << "\nGracias por usar nuestra aplicacion!";
			return 0;
		}

	pregunta:
		cout << "\n\nDesea volver al inicio?: ";
		cin >> pregFinal;
		if (pregFinal == "Si" || pregFinal == "si") {
			goto inicio;
		}
		else if (pregFinal == "No" || pregFinal == "no") {
			cout << "\n\nGracias por usar nuestra aplicacion!";
			return 0;
		}
		else {
			cout << "\n\nError, responda con si o no";
			goto pregunta;
		}
	}		