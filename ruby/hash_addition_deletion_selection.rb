
hackerrank = {1 => 1, 2 => 4, 3 => 9, 4 => 16, 5 => 25}
hackerrank.store("6", 36)
hackerrank.keep_if { |key, _value| key.is_a?(Integer)}
hackerrank.delete_if {|key, _value| key % 2 == 0}
