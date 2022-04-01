/// ###########################################################################
/// @section Includes
/// ###########################################################################

#include <gtest/gtest.h>

#include <algorithm>
#include <numeric>
#include <random>
#include <vector>

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

void MergeSort(std::vector<int>& /*data*/) {

}

/// ###########################################################################
/// @section tests
/// ###########################################################################

TEST(SortingTestSuite, MergeSort) {
  auto data = GetData();
  auto copy = data;
  MergeSort(data);
  std::sort(copy.begin(), copy.end());
  EXPECT_EQ(data, copy);
}

/// ###########################################################################
/// @section main
/// ###########################################################################

int main(int argc, char** argv) {
  ::testing::InitGoogleTest(&argc, argv);
  return RUN_ALL_TESTS();
}
