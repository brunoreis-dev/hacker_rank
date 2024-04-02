def count_multibyte_char(string)
  multibytes = 0
  string.each_char {|x| multibytes += 1 if x.bytesize > 1}

  multibytes
end

count_multibyte_char('¥1000')
