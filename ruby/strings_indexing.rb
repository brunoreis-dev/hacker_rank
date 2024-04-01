def serial_average(serial)
  average = "%.2f" % ((serial[4, 5].to_f + serial[-5, 5].to_f) / 2).round(2)

  "#{serial[0, 3]}-#{average}"
end


serial_average('001-12.43-56.78')
