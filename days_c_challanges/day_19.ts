function main() {
  const inputLines = ["3", "1", "2", "3", "2", "Hello", "World!"];
  const filteredArray = removeFirstDuplicates(inputLines);
  printArray(filteredArray);
}

function removeFirstDuplicates<T>(arr: T[]): T[] {
  let result: T[] = [];
  let removedOdd = false;

  arr.forEach((item) => {
    const exists = result.find((newItem) => item === newItem);

    if (exists && !removedOdd) {
      result = result.filter((filterItem) => filterItem !== exists);
      result.push(item);
      removedOdd = true;
    } else if (exists && removedOdd) {
      removedOdd = false;
    } else {
      result.push(item);
    }
  });

  return result;
}

function printArray<T>(arr: T[]): void {
  arr.forEach((element) => {
    console.log(element);
  });
}
