def strike(word)
  "<strike>#{word}</strike>"
end

def mask_article(text, word_arr)
  word_arr.each do |word|
    text.gsub!(word, strike(word))
  end

  text
end
