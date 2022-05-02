#include "solution.h"
#include "util.h"
#include <unordered_set>
#include <numeric>
#include <iterator>
#include <unordered_map>
#include <queue>
#include <string>
#include <sstream>
#include <algorithm>
using namespace sol921;
using namespace std;

/*takeaways
  - count how many unmatched '('
    ')' who are lacking their
    counterpart to form a pair to
    make the entire string valid
*/
int Solution::getMin(string s)
{
  /*unmatched '(' and ')' */
  auto l = 0, r = 0;
  for (auto c : s)
    if (c == '(')
      l++;
    /* form a pair - remove one from the unmatched '(' */
    else if (l > 0)
      l--;
    else
      r++;
  ;

  return l + r;
}