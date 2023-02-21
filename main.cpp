#include <iostream>
#include <vector>

int getSum(std::vector<int> arr)
{
    int sum = 0;
    for (int i = 0; i < arr.size(); i++)
    {
        sum += arr[i];
    }
    return sum;
}

double getAverage(const std::vector<int>& vec) {

    double avg = 0;
    for(int i = 0; i < vec.size(); ++i) {
        avg += vec[i];
    }

    return (vec.empty()) ? 0 : avg / vec.size();
}

int main()
{
    std::vector<int>arr={1,2,3,4,5,6,7,8,9,10};
    std::cout<<getSum(arr)<<"\n";

    std::cout << "Average: " << getAverage(arr) << "\n";
}