
#include "main.h"



int main() {
    TreeLib::AVLMap<int, int> mymap;
    mymap.Insert(0,0);
    mymap.Insert(1,-1);
    mymap.Insert(2,-101);
    mymap.Insert(3,10);
    mymap.Insert(4,10);
    mymap.Insert(5,30);

    std::string s = mymap.ToString("RCL");
    auto tree = TreeLib::AVLMap<int, int>::FromString(s);
    std::cout << tree.ToString("RCL");
    return 0;
}
