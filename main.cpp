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
int getMin(std::vector<int>arr)
{
    int mn=arr[0];
    for(int i=1;i<arr.size();i++)
    {
        mn=std::min(arr[i],mn);
    }
    return mn;
}
int main()
{
    std::vector<int>arr={1,2,3,4,5,6,7,8,9,10};
    std::cout<<getSum(arr)<<"\n";
    std::cout<<"Minimum value is: "<<getMin(arr)<<"\n";
}