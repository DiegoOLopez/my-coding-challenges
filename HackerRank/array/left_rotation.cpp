/**

Rotate an array to the left by d positions.

*/
vector<int> rotateLeft(int d, vector<int> arr) {
  for (int i = 0; i < d; i++) {
    int first = arr[0];
    arr.erase(arr.begin());
    arr.push_back(first);
  }
  return arr;
}

/**

Time Complexity: O(n * d)
Space Complexity: O(1)

*/