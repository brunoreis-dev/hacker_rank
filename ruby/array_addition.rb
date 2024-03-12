def end_arr_add(arr, element)
  arr.push(element)
end

end_arr_add([1,2,3], 4)

def begin_arr_add(arr, element)
  arr.unshift(element)
end

begin_arr_add([2,3,4], 1)

def index_arr_add(arr, index, element)
  arr.insert(index, element)
end

index_arr_add([1,3,4], 1, 2)

def index_arr_multiple_add(arr, index)
  arr.insert(index, 40, 50)
end

index_arr_multiple_add([20, 30, 60], 2)
