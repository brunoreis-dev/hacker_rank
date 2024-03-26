def convert_temp(temperature, output_scale: 'celsius',**options)
  if options[:input_scale] == 'celsius'
      if output_scale == 'fahrenheit'
          return temperature * 1.8 + 32
      elsif output_scale == 'kelvin'
          return temperature + 273.15
      end
  elsif options[:input_scale] == 'fahrenheit'
      if output_scale == 'celsius'
          return (temperature - 32) / 1.8
      elsif output_scale == 'kelvin'
          return (temperature - 32) / 1.8 + 273.15
      end

  elsif options[:input_scale] == 'kelvin'
      if output_scale == 'celsius'
          return temperature - 273.15
      elsif output_scale == 'fahrenheit'
          return (temperature - 273.15) * 1.8 + 32
      end
  end

  return temperature
end

convert_temp(0, input_scale: 'celsius', output_scale: 'kelvin')
convert_temp(0, input_scale: 'celsius', output_scale: 'fahrenheit')
