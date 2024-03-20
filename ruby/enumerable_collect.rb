encoded_messages = ["Gb trg gb gur bgure fvqr!", "Jul qvq gur puvpxra pebff gur ebnq?"]

def rot13(secret_messages)
  secret_messages.collect { |message, index| message.tr("A-Za-z", "N-ZA-Mn-za-m") }
  # secret_messages.map { |message, index| message.tr("A-Za-z", "N-ZA-Mn-za-m") }
end

rot13(encoded_messages)
