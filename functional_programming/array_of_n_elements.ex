defmodule Solution do
  def make_array(n, i, list) when n > i  do
    make_array(n, i + 1, [i | list])
  end

  def make_array(_, _, list),  do: Enum.reverse(list)

  def main do
    n =
      IO.gets("")
      |> String.trim()
      |> String.to_integer()

    make_array(n, 0, [])
    |> IO.inspect(limit: :infinity)
  end
end

Solution.main()
