# -------------------------------
# Topic 3: Data Structures
# -------------------------------

# Q1: Reverse a string
def reverse_string(s: str):
    return s[::-1]

# Q2: Count vowels in a string
def count_vowels(s: str):
    mpp={}
    for i in s:
        if i in ['a','e','i','o','u','A','E','I','O','U']:
            if(mpp[i]):
                mpp[i]+=1
            mpp[i]=1
    for i in mpp:
        print(f"{i} : {mpp[i]}")


# Q3: Largest and smallest element in a list
def min_max(lst: list):
    mini=float("INF")
    maxi=-float("INF")
    for i in lst:
        min(i,mini)
        max(i,maxi)
    return mini,maxi

# Q4: Remove duplicates from a list
def remove_duplicates(lst: list):
    a=set(lst)
    return list(a)


# Q5: Sum and average of 5 numbers
def sum_and_average(lst: list):
    return sum(lst),sum(lst)//5


# Q6: Access last two elements of a tuple
def last_two_elements(t: tuple):
    return (t[-2],t[-1])


# Q7: Student with highest marks
def top_student(marks: dict):
    return max(*marks)


# Q8: Merge two dictionaries
def merge_dicts(d1: dict, d2: dict):
    pass


# Q9: Check if a word is present in a set
def word_in_set(word: str, wordset: set):
    pass


# Q10: Frequency of each word in a sentence
def word_frequency(sentence: str):
    pass


# -------------------------------
# Testing area (uncomment and run)
# -------------------------------
if __name__ == "__main__":
    # Example test calls (you can modify these while testing)
    print(reverse_string("hello"))         # → "olleh"
    # print(count_vowels("education"))       # → 5
    print(min_max([3, 7, 2, 9, 1]))        # → (1, 9)
    print(remove_duplicates([1,2,2,3,1]))  # → [1,2,3]
    print(sum_and_average([10,20,30,40,50])) # → (150, 30.0)
    print(last_two_elements((10,20,30,40,50))) # → (40,50)
    print(top_student({"A":85, "B":90, "C":78})) # → "B"
    print(merge_dicts({"x":1}, {"y":2}))  # → {"x":1,"y":2}\
    print(word_in_set("python", {"java","python","c++"})) # → True
    print(word_frequency("this is a test this is")) # → {'this':2,'is':2,'a':1,'test':1}
