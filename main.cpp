#include <fstream>

int main() {
    std::ifstream in("point3.in");
    std::ofstream out("point3.out");
    std::pair<int,int> point;
    std::pair<std::pair<int,int>,std::pair<int,int>> segment;
    in>>point.first>>point.second>>segment.first.first>>segment.first.second>>segment.second.first>>segment.second.second;
    std::pair<int,int> vec1={point.first-segment.first.first,point.second-segment.first.second};
    std::pair<int,int> vec2={point.first-segment.second.first,point.second-segment.second.second};
    int vecMul = vec1.first*vec2.second-vec1.second*vec2.first;
    if (vecMul==0 and ((vec1.first*vec2.first+vec1.second*vec2.second)<=0)){
        out<<"YES";
    } else{
        out<<"NO";
    }
    return 0;
}
