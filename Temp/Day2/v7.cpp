#include <iostream>
int main()
{
  // int 128 bit
  __int128_t var = (long long)-23542342345435;
  // unsigned int 128 bit
  __uint128_t var2 = (long long)64324234234234;

  // printing in c++
  std::cout << "int 128 bit: "
            << static_cast<long long>(var) << std::endl;
  // printing in c
  printf("int 128 bit: %lld\n", (long long)var);

  // printing in c++
  std::cout << "unsinged int 128 bit: "
            << static_cast<long long>(var2) << std::endl;
  // printing in c
  printf("unsinged int 128 bit: %llu\n", (long long)var2);

  return 0;
}