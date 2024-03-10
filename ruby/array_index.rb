# PART 1
def element_at(arr, index)
  puts arr.at(index)
  arr[index]
end

# return index (2) value: 3
element_at([1, 2, 3, 4, 5], 2)

def inclusive_range(arr, start_pos, end_pos)
  arr[start_pos..end_pos]
end

# return an array (indexPos 1 at indexPos 3 "last index inslusive"): [2,3,4]
inclusive_range([1, 2, 3, 4, 5], 1, 3)

def non_inclusive_range(arr, start_pos, end_pos)
  arr[start_pos...end_pos]
end

# return an array (indexPos 1 at indexPos 3 "last index non inclusive"): [2,3]
non_inclusive_range([1, 2, 3, 4, 5], 1, 3)

def start_and_length(arr, start_pos, length)
  arr[start_pos, length]
end

# return an array (startPos 0 at the third index "0 - 1 - 2"): [1, 2, 3]
start_and_length([1, 2, 3, 4, 5], 0, 3)


# PART 2

def neg_pos(arr, index)
  arr[-index]
end

# return index inverse value (lenght - index(2)) value: 4
neg_pos([1, 2, 3, 4, 5], 2)


def first_element(arr)
    arr.first
end

# return first element value (1)
first_element([1, 2, 3, 4, 5])

def last_element(arr)
   arr.last
end

# return last element value (5)
last_element([1, 2, 3, 4, 5])

def first_n(arr, n)
    arr.take(n)
end

first_n([1, 2, 3, 4, 5], 3)

def drop_n(arr, n)
     arr.drop(n)
end

drop_n([1, 2, 3, 4, 5], 3)
