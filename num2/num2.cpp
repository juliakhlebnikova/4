
// Запуск программы: CTRL+F5 или меню "Отладка" > "Запуск без отладки"
// Отладка программы: F5 или меню "Отладка" > "Запустить отладку"

// Советы по началу работы 
//   1. В окне обозревателя решений можно добавлять файлы и управлять ими.
//   2. В окне Team Explorer можно подключиться к системе управления версиями.
//   3. В окне "Выходные данные" можно просматривать выходные данные сборки и другие сообщения.
//   4. В окне "Список ошибок" можно просматривать ошибки.
//   5. Последовательно выберите пункты меню "Проект" > "Добавить новый элемент", чтобы создать файлы кода, или "Проект" > "Добавить существующий элемент", чтобы добавить в проект существующие файлы кода.
//   6. Чтобы снова открыть этот проект позже, выберите пункты меню "Файл" > "Открыть" > "Проект" и выберите SLN-файл.


#include <sstream>
#include <iostream>
#include <vector>
#include <string>
#include <iterator>
#include <iomanip>


using namespace std;

vector<string> F(istream& str = cin)
{
	string s;
	getline(str, s);
	vector <string> A;
	vector<string> ::iterator it1;
	string w;
	stringstream d(s);
	while (d >> w) A.push_back(w);

	if (begin(A) == end(A))
		return A;
	it1 = end(A) - 1;
	if (*it1 == ".")
	{
		A.erase(it1);
		if (begin(A) == end(A))
			return A;
		it1 = end(A) - 1;
	}
	else
	{
		string x;
		x = *it1;
		x.pop_back();
		*it1 = x;
		
	}


	const string L = *(it1);

	while (true)
	{
		vector<string> ::iterator t;
		t = find(begin(A), end(A), L);
		if (t == end(A))
			break;
		else A.erase(t);
	}

	int y;
	for (string & q : A)
	{
		auto k = q.begin();
		for (auto it = q.begin() + 1; it != q.end(); it++)
			if (*it == *k)
			{
				y = distance(q.begin(), it);
				q.erase(y, 1);
				it -= 1;
			}
	};

	return A;

}


int main()
{
	cout << "Enter string: ";
	vector<string> ::iterator it;
	vector<string> s = F();
	for (it = s.begin(); it != s.end(); it++)
		cout << *it << " ";
}

