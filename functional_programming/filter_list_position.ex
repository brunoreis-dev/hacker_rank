defmodule Solution do
  defp make_numbers_array(acc) do
    case IO.gets("") do
      :eof ->
        Enum.reverse(acc)

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

  defp filter_condition({_, current_index}) when rem(current_index, 2) == 1, do: true
  defp filter_condition({_, _i}), do: false

  def filter_arr do
    make_numbers_array([])
    |> Enum.with_index()
    |> Enum.filter(fn item -> filter_condition(item) end)
    |> Enum.map(fn {item, _} -> IO.inspect(item) end)
  end
end

Solution.filter_arr()
