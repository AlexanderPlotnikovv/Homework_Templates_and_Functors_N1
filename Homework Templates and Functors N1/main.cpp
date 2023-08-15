#include <iostream>
#include <vector>

template<class T>
T Square(T a)
{
	return a * a;
}

template<class T>
std::vector<T> Square(std::vector<T>& vector)
{
	for (int i = 0; i != vector.size(); ++i)
	{
		vector[i] *= vector[i];
	}
	return vector;
}

int main()
{
	std::vector<int> vector = {-1,3,8};
	std::vector<int> copy = Square(vector);
	for (auto vec : copy)
	{
		std::cout << vec << " ";
	}
	std::cout << std::endl << Square(1.2);
	return 0;
}