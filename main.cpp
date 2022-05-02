#include <iostream>
#include <vector>
#include <string>
#include <tuple>
#include <unordered_map>
#include "solution.h"
#include "util.h"

using namespace std;
using namespace sol921;

/*
Input: "())"
Output: 1
*/
tuple<string, int>
testFixture1()
{
  return make_tuple("())", 1);
}

/*
Input: "((("
Output: 3
*/
tuple<string, int>
testFixture2()
{
  return make_tuple("(((", 3);
}
/*
Input: "()"
Output: 0
*/
tuple<string, int>
testFixture3()
{
  return make_tuple("()", 0);
}

/*
Input: "()))(("
Output: 4
*/
tuple<string, int>
testFixture4()
{
  return make_tuple("()))((", 4);
}

void test1()
{
  auto f = testFixture1();
  Solution sol;
  cout << "Expect to see " << get<1>(f)
       << ": " << sol.getMin(get<0>(f)) << endl;
}
void test2()
{
  auto f = testFixture2();
  Solution sol;
  cout << "Expect to see " << get<1>(f)
       << ": " << sol.getMin(get<0>(f)) << endl;
}

void test3()
{
  auto f = testFixture3();
  Solution sol;
  cout << "Expect to see " << get<1>(f)
       << ": " << sol.getMin(get<0>(f)) << endl;
}

void test4()
{
  auto f = testFixture4();
  Solution sol;
  cout << "Expect to see " << get<1>(f)
       << ": " << sol.getMin(get<0>(f)) << endl;
}

main()
{
  test1();
  test2();
  test3();
  test4();
  return 0;
}