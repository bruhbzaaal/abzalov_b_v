/* Условие задачи:
После того, как Роман не решил на сборах задачу с запросами на отрезке, он захотел порадовать вас другой задачей с запросами на отрезке.

Вам дан массив из n чисел. Далее дано k запросов. Запросы бывают двух видов:

1 l r : перевернуть подотрезок массива с l по r включительно.

2 l r : вывести на экран подотрезок массива с l по r включительно.

Входные данные
В первой строке даны числа n и k. (1 ≤ n, k ≤ 103)

В следующей строке находятся n чисел ai, разделенных пробелами. ()

Далее идут k строк, описывающих запросы.

Каждая строка запроса начинается с типа (1 или 2), далее идут числа l, r (1 ≤ l ≤ r ≤ n).

Выходные данные
Для каждого запроса второго типа выведите r - l + 1 чисел, разделенных пробелами - подотрезок массива с l по r. */

#include <iostream>
#include <vector>

int main() {
	int n, k;
	std::cin >> n >> k;
	std::vector<int> a(n+1);
	for (int j = 1; j <= n; ++j) {
		std::cin >> a[j];
	}

	 for (int i = 0; i < k; ++i) {
		int com = 0;
		int l, r;
		std::cin >> com >> l >> r;
		if (com == 1) {
			int rd = r;
			for (int j = l; j <= l + (rd-l)/2; ++j) {
				std::swap(a[j], a[r]);
				r = r - 1;
			}
		} 
		else {
			for (int j = l; j <= r; ++j) {
				std::cout << a[j] << " ";
			}
			std::cout << std::endl;
		}
	}

}