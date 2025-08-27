#include <iostream>
#include <vector>


// demostration of try-catch
int get_item(std::vector<int>& nums, int index) {
  if (index < 0 || index >= nums.size()) {
    throw std::out_of_range("Index out of range");
    // throw std::runtime_error("Some other error");
  }
  return nums[index];
}

int main() {
  std::vector<int> nums = {1, 2, 3, 4, 5, 6};
  try {
    get_item(nums, 10);
  } catch (const std::out_of_range& e) {
    std::cerr << "Caught out_of_range exception: " << e.what() << std::endl;
  } 
  catch (const std::exception& e) {
    std::cerr << "Caught exception: " << e.what() << std::endl;
  } 
  return 0;
}