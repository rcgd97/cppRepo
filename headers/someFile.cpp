#include <algorithm>
#include <vector>

using std::sort;
using std::vector;

typedef vector<int> IntVector;

int main() {
  IntVector v{1 , 2, 5 , 0, -3};
  sort(v.begin(), v.end());//does this code work?
}
