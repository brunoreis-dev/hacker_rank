def element_at(arr, index)
  puts arr.at(index)
  arr[index]
end

element_at([1, 2, 3, 4, 5], 2)
# return value: 3

def inclusive_range(arr, start_pos, end_pos)
  arr[start_pos..end_pos]
end

inclusive_range([1, 2, 3, 4, 5], 1, 3)
# return an array: [2,3,4]

def non_inclusive_range(arr, start_pos, end_pos)
  arr[start_pos...end_pos]
end

non_inclusive_range([1, 2, 3, 4, 5], 1, 3)
# return an array: [2,3]

def start_and_length(arr, start_pos, length)
  arr[start_pos, length]
end

start_and_length([1, 2, 3, 4, 5], 0, 3)
# return an array: [1, 2, 3]
