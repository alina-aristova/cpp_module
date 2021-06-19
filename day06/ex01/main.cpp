#include <string>
#include <iostream>
#include "Data.hpp"

std::string *random_str()
{
	std::string str;
	std::string char_arr = "abcdefghijklmnopqrstuvwxyzABSCDEFGHIJKLMOPQRSTUVWXYZ";

	int len = 10;
	str.resize(len);
	int i = -1;
	while (++i < len)
		str[i] = char_arr[rand() % 53];
	return (new std::string(str));
}

void *serialize()
{
	std::string *s1 = random_str();
	int n = rand();
	std::string *s2 = random_str();

	void *raw = ::operator new (2 * sizeof(std::string *) + sizeof(int));
	void *temp = raw;

	*reinterpret_cast<std::string **>(temp) = s1;
	temp = reinterpret_cast<std::string **>(temp) + 1;
	*reinterpret_cast<int *>(temp) = n;
	temp = reinterpret_cast<int *>(temp) + 1;
	*reinterpret_cast<std::string **>(temp) = s2;
	std::cout << "s1: " << *s1 << std::endl
					<< "n : " << n  << std::endl
        	<< "s2: " << *s2 << std::endl;
	return (raw);
}

Data *deserialize(void *raw)
{
	Data *data = new Data;

	data->s1 = *reinterpret_cast<std::string **>(raw);
	raw = reinterpret_cast<std::string **>(raw) + 1;
	data->n = *reinterpret_cast<int *>(raw);
	raw = reinterpret_cast<int *>(raw) + 1;
	data->s2 = *reinterpret_cast<std::string **>(raw);

	return (data);
}

int main()
{
	srand(time(NULL));
	void *raw = serialize();
	Data *Data = deserialize(raw);
	std::cout << sizeof(raw) << std::endl;
	std::cout << "s1: " << *Data->s1 << std::endl;
	std::cout << "n : " << Data->n  << std::endl;
    std::cout << "s2: " << *Data->s2 << std::endl;
}