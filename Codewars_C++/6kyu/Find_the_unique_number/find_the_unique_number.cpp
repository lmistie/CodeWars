#include "iostream"
#include "vector"

float find_uniq(const std::vector<float> &v)
{
    float a = v[0];
    float b = v[1];
    float c = v[2];
    if (a == b)
    {
        for (int i = 2; i < v.size(); i++)
        {
            if (v[i] != a)
            {
                return v[i];
            }
        }
    }
    else if (a == c)
    {
        return b;
    }
    else
    {
        return a;
    }
}

int main() {
    std::vector<float> v = {1, 1, 1, 2, 1, 1};
    std::vector<float> v1 = {0, 0, 0.55, 0, 0};
    std::cout << find_uniq(v) << std::endl;
    std::cout << find_uniq(v1) << std::endl;
    return 0;
}