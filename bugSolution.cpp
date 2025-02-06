std::vector<int> vec = {1, 2, 3};
for (int& x : vec) { //Use iterators or range-based for loops
    x *= 2;
}
vec.push_back(4); 