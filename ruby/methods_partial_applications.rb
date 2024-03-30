def factorial(n)
  (1..n).reduce(1, :*)
end

combination = -> (n) do
  -> (k) do
      factorial(n) / (factorial(k) * factorial(n - k))
  end
end

nCr = combination.(5)
puts nCr.(3)


power_function = -> (power) do
  -> (number) do
    number ** power
  end
end

squared = power_function.call(2)
cubed = power_function.call(3)

puts squared.call(5)
puts cubed.call(5)
