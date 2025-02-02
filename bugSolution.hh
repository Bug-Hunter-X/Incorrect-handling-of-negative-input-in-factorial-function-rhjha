function foo(x: int): int {
  if (x == 0) {
    return 1;
  } else {
    return x * foo(x - 1);
  }
}

function bar(x: int): int {
  if (x < 0) {
    throw new ValueError("Factorial is not defined for negative numbers");
  }
  return foo(x);
}

$x = 5;
$y = bar($x);
echo $y; // Output: 120

$x = -1;

try {
  $y = bar($x);
echo $y;
} catch (ValueError $e) {
  echo $e->getMessage(); // Output: Factorial is not defined for negative numbers
}
