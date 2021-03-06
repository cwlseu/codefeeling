#include "test_api.h"
#include <random>
namespace test {
int get_int_rand()
{
// #ifdef _MSC_VER
// 	srand((unsigned)time(NULL));
// 	return rand();
// #else
    std::random_device rd;
    std::mt19937 e(rd());
	std::uniform_int_distribution<int> dist;
    return dist(e);
}
std::vector<int> generate_int_array(const size_t size, const int range) {
    std::vector<int> result;
    for(size_t i = 0; i < size; ++i) result.push_back(get_int_rand()%range);
    return result;
}
}