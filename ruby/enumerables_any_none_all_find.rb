hash = {"a" => "1", "b" => "2", "c" => "3", "d" => "4", "e" => "5", "text" => "a"}
integers_hash = {1 => 1, 2 => 2, 3 => 3, 4 => 4, 5 => 5}
nil_hash = {1 => 1, 2 => 2, 3 => 3, 4 => 4, 5 => nil}

def func_any(hash)
  hash.any? {|key, value| key.is_a? Integer}
end

func_any(hash)
func_any(integers_hash)

def func_all(hash)
  hash.all? {|key, value| value.is_a?(Integer) && value < 10}
end

func_all(hash)
func_all(integers_hash)

def func_none(hash)
  hash.none? {|key, value| value.nil?}
end

func_none(hash)
func_none(nil_hash)

def func_find(hash)
  hash.find {|key, value| (key.is_a?(Integer) && value.is_a?(Integer) && value < 20)|| (key.is_a?(String) && value.is_a?(String) && value.start_with?("a"))}
end

func_find(hash)
func_find(integers_hash)
