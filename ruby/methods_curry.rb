power_function = -> (x, z) {
    z ** x
}

power = 2
power_of = power_function.curry.(power)

base = 5
puts power_of.(base)
