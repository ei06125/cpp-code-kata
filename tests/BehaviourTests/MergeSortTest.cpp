/// ###########################################################################
/// @section Includes
/// ###########################################################################

#include <gtest/gtest.h>

#include <algorithm> // shuffle, sort
#include <numeric>   // iota
#include <random>    // default_random_engine
#include <vector>    // vector

/// ###########################################################################
/// @section Helper
/// ###########################################################################

constexpr std::size_t cxMaxSize = 10;

static std::vector<int> GetData() {
  static std::vector<int> result;
  if (result.empty()) {
    std::default_random_engine dre;
    result.resize(cxMaxSize);
    std::iota(result.begin(), result.end(), 1);
    std::shuffle(result.begin(), result.end(), dre);
  }
  return result;
}

/// ###########################################################################
/// @section Solution
/// ###########################################################################

template<typename T>
void MergeSort(std::vector<T>& /*A*/) {}

/// ###########################################################################
/// @section tests
/// ###########################################################################

TEST(MergeSortTestSuite, MergeSort_Sorts_Int_Container) {
  std::vector<int> numbers{ 9, 1, 8, 2, 7, 3, 6, 4, 5 };
  auto expected = numbers;
  MergeSort(numbers);
  std::sort(expected.begin(), expected.end());
  EXPECT_EQ(expected, numbers);
}

TEST(MergeSortTestSuite, MergeSort_Sorts_Char_Container) {
  std::vector<char> letters{ 'z', 'a', 'y', 'b', 'x', 'c', 'f', 'l', 'm' };
  auto expected = letters;
  MergeSort(letters);
  std::sort(expected.begin(), expected.end());
  EXPECT_EQ(expected, letters);
}

TEST(MergeSortTestSuite, MergeSort) {
  auto data = GetData();
  auto copy = data;
  MergeSort(data);
  std::sort(copy.begin(), copy.end());
  EXPECT_EQ(data, copy);
}
