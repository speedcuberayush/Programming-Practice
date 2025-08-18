import time
import random

# Example C++ code
cpp_code = """#include <iostream>
using namespace std;

int main() {
    cout << "Hello, World!" << endl;
    return 0;
}
"""

file_path = r"arrays\typedcode.cpp"

with open(file_path, "w") as f:
    for ch in cpp_code:
        f.write(ch)
        f.flush()
        # Add slight randomization to mimic human typing
        time.sleep(random.uniform(0.07, 0.11))  # ~130 wpm
