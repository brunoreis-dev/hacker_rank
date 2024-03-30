# Write a lambda which takes an integer and square it
square = -> (number) {number ** 2}

# Write a lambda which takes an integer and increment it by 1
plus_one = -> (number) { number + 1 }

# Write a lambda which takes an integer and multiply it by 2
into_2 = -> (number) { number * 2 }

# Write a lambda which takes two integers and adds them
adder = -> (a,b) { a + b }

# Write a lambda which takes a hash and returns an array of hash values
values_only = -> (hash) { hash.map { | _key, value | value } }


input_number_1 = 5
input_number_2 = 3
input_hash = { font_size: 10, font_family: "Arial" }

puts square.(input_number_1);
puts plus_one.(input_number_2);
puts into_2.(input_number_1);
puts adder.(input_number_1, input_number_2);
puts values_only.(input_hash)
