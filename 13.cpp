#include <iostream>
#include <vector>
using namespace std;
int main()
{
    vector<int> vec={23, 56, 67, 34};
    /*for(int i =0; i< 4; i++)
    {
      cout<<vec[i]<<" ";
    }*/
    for(auto ele : vec)
    {
        cout<<ele<<" ";
    }
    return 0;
}
