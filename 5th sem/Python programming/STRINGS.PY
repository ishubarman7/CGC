
# Demonstrating different string operations in Python

# 1. Creating strings
str1 = "Hello, World!"
str2 = 'Python Programming'

# 2. Accessing characters
first_char = str1[0]
last_char = str1[-1]

# 3. String slicing
slice_str = str2[0:6]  # 'Python'

# 4. String concatenation
concat_str = str1 + " " + str2

# 5. String repetition
repeat_str = str1 * 2

# 6. String length
length = len(str2)

# 7. Changing case
upper_str = str2.upper()
lower_str = str2.lower()
title_str = str2.title()

# 8. Finding substrings
find_index = str1.find("World")
count_o = str1.count('o')

# 9. Replacing substrings
replaced_str = str1.replace("World", "Python")

# 10. Splitting and joining
split_str = str2.split(' ')
joined_str = '-'.join(split_str)

# 11. Stripping whitespace
str_with_spaces = "   Hello, Python!   "
stripped = str_with_spaces.strip()

# 12. Checking start/end
starts = str1.startswith("Hello")
ends = str2.endswith("ing")

# Print results
print("Original String 1:", str1)
print("Original String 2:", str2)
print("First character:", first_char)
print("Last character:", last_char)
print("Sliced string:", slice_str)
print("Concatenated string:", concat_str)
print("Repeated string:", repeat_str)
print("Length:", length)
print("Uppercase:", upper_str)
print("Lowercase:", lower_str)
print("Title case:", title_str)
print("Index of 'World':", find_index)
print("Count of 'o':", count_o)
print("Replaced string:", replaced_str)
print("Split string:", split_str)
print("Joined string:", joined_str)
print("Stripped string:", stripped)
print("Starts with 'Hello':", starts)
print("Ends with 'ing':", ends)
