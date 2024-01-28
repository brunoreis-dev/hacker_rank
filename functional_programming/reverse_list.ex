defmodule Solution do
  defp make_array(acc) do
    case IO.gets("") do
      :eof -> acc

      item ->
        item =
          item
          |> String.trim()

      case item do
        "" -> acc
        item -> make_array([String.to_integer(item) | acc])
      end
    end
  end

  def main do
    make_array([])
    |> Enum.each(fn item -> IO.inspect(item) end)
  end
end

Solution.main()
