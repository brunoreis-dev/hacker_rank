defmodule Solution do
  defp get_array_input(acc) do
    case IO.read(:line) do
      :eof ->
        Enum.reverse(acc)

      item ->
        item =
          item
          |> String.trim()

        case item do
          "" -> Enum.reverse(acc)
          item -> get_array_input([item | acc])
        end
    end
  end

  def get_user_input do
    s =
      IO.gets("")
      |> String.trim()
      |> String.to_integer()

    get_array_input([])
    |> replication(s)
  end

  defp replication(list, n) do
    Enum.map(list, fn x -> print_numbers(n, x) end)
  end

  defp print_numbers(n, item) when n > 0 do
    IO.puts(item)

    print_numbers(n - 1, item)
  end

  defp print_numbers(_n, _item), do: :ok
end

Solution.get_user_input()
