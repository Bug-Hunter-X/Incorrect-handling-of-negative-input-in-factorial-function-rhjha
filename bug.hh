function foo(x: int): int {
  if (x == 0) {
    return 1;
  } else {
    return x * foo(x - 1);
  }
}

function bar(x: int): int {
  if (x < 0) {
    return -1; //should throw an exception 
  }
  return foo(x);
}

$x = 5;
$y = bar($x);
echo $y; // Output: 120

$x = -1;
$y = bar($x);
echo $y; // Output: -1