# Initialize 3 variables here as explained in the problem statement
array = Array.new
# array = []

# array_1 = Array.new(1)
array_1 = [nil]

# array_2 = Array.new(2, 10)
array_2 = [10,10]

array_3 = Array.new(3) { |i| i % 3 == 0 ? 10 : i % 3 == 1 ? 5 : 3 }
# array_3 = [10, 5, 3]
