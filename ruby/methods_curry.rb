power_function = -> (x, z) {
    z ** x
}

power_of_two = power_function.curry.(2)
power_of_three = power_function.curry.(3)

base = 5
puts power_of_two.(base)
puts power_of_three.(base)
