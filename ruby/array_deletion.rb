numbersArray = [5, 6, 5, 4, 3, 1, 2, 5, 4, 3, 3, 3]

def end_arr_delete(arr)
  arr.pop
end

end_arr_delete(numbersArray )

def start_arr_delete(arr)
  arr.shift
end

start_arr_delete(numbersArray)

def delete_at_arr(arr, index)
  arr.delete_at(index)

end

delete_at_arr(numbersArray, 2)

def delete_all(arr, val)
  arr.delete(val)
end

delete_all(numbersArray, 5)
