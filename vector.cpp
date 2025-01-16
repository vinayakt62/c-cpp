

#include <bits/stdc++.h> 
using namespace std; 
  
int main() 
{ 
  
    vector<int> arr = { 6, 5, 4, 3 }; 
  
    cout <<"\n Print vector\n";

    for (auto& it : arr) {   
        cout << it << ' '; 
    } 
    
    arr.push_back(2);
    
    arr.push_back(1);

    arr.push_back(0);
    
    cout <<"\n push back vector print \n";
    for (auto& it1 : arr) {   
        cout << it1 << ' '; 
    } 
    


    return 0; 
}
