def solve(x):
    # Simple and efficient approach: try values of y starting from 1
    # Since the problem guarantees a solution exists, we'll find it quickly
    
    y = 1
    while y < 10**9:
        # Calculate x#y (concatenation of x and y)
        # x#y = x * 10^(number of digits in y) + y
        digits_in_y = len(str(y))
        concatenated = x * (10 ** digits_in_y) + y
        
        # Check if concatenated number is divisible by x+y
        sum_xy = x + y
        if concatenated % sum_xy == 0:
            return y
        
        y += 1
    
    return -1  # Should never reach here according to problem statement

def main():
    t = int(input())
    for _ in range(t):
        x = int(input())
        result = solve(x)
        print(result)

if __name__ == "__main__":
    main()

# Test with the given examples
print("Testing with examples:")
test_cases = [8, 42, 1000, 66666, 106344, 9876543]
for x in test_cases:
    y = solve(x)
    digits_in_y = len(str(y))
    concatenated = x * (10 ** digits_in_y) + y
    sum_xy = x + y
    quotient = concatenated // sum_xy
    print(f"x={x}, y={y}, x#y={concatenated}, x+y={sum_xy}, quotient={quotient}, remainder={concatenated % sum_xy}")