def square_of_sum(my_array, proc_square, proc_sum)
  sum = proc_sum.call(my_array)
  proc_square.call(sum)
end

proc_square_number = proc { |number| number * number }
proc_sum_array     = proc { |arr| arr.reduce(0) { |acc, number| acc + number } }

puts square_of_sum([1,2,3], proc_square_number, proc_sum_array)
