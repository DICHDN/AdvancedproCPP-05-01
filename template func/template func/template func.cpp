
#include <iostream>
#include <vector>


template  <class Temp>
void pow_2(Temp a)
{
    std::cout << a * a << std::endl;
}
template  <class Temp>
void pow_2(std::vector<Temp> a)
{
    for (int i = 0; i < a.size(); ++i)
    {
        std::cout << a[i] * a[i] << " ";
    }
    std::cout << std::endl;
}




int main()
{
    std::vector <double> arr = { 1,2,3,4,5,6,7 };
    int b = 10;
    double c = 9;

    pow_2(arr);
    pow_2(b);
    pow_2(c);

}

