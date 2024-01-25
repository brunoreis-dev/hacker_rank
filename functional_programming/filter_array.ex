defmodule Solution do
  defp make_numbers_array(acc) do
    case IO.gets("") do
      :eof -> Enum.reverse(acc)

      item ->
        item =
          item
          |> String.trim()

        case item do
          "" -> Enum.reverse(acc)
          item -> make_numbers_array([String.to_integer(item) | acc])
        end
    end
  end

  def filter_arr do
    s =
      IO.gets("")
      |> String.trim()
      |> String.to_integer()

    make_numbers_array([])
    |> Enum.filter(fn number -> number < s end)
    |> Enum.map(fn number -> IO.inspect(number) end)
  end
end

Solution.filter_arr()
