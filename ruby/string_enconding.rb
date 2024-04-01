def transcode(text)
  begin
    current_encoding = text.encoding

    if current_encoding != 'utf-8'
      text.force_encoding "UTF-8"
    end
  rescue Exception => e
    puts "Erro ao transcodificar o texto: #{e.message}"
    return nil
  end
end

original_text = "Development".force_encoding("ISO-2022-JP-KDDI")

transcode(original_text)
