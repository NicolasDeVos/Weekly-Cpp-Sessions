#include <random>
#include <vector>
#include <algorithm>


int main()
{
	std::random_device rd;  //Will be used to obtain a seed for the random number engine
	std::mt19937 gen(rd()); //Standard mersenne_twister_engine seeded with rd()
	std::normal_distribution<> dist{ 250,150 };


	size_t size = 1000;
	std::vector<double> v(size);


	std::generate_n(v.data(), size, [&gen, &dist]() {return dist(gen); });

	return 0;
}