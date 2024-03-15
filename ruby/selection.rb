numbersArray = [3, 4, 2, 1, 2, 3, 4, 5, 6]
negativeNumbersArray = [-3, 4, 0, -2, 8, -1, 5, 6, 7]

def select_arr(arr)
  arr.select {|number| number.odd?}
end

select_arr(numbersArray)

def reject_arr(arr)
 arr.reject {|number| number % 3 == 0}
end

reject_arr(numbersArray)

def delete_arr(arr)
 arr.delete_if {|number| number < 0}
end

delete_arr(negativeNumbersArray)

def keep_arr(arr)
 arr.keep_if {|number| number >= 0}
end

keep_arr(negativeNumbersArray)
