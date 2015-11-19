var assert = require(__dirname + '/test_functions').testAssert;
var nm = require(__dirname + '/../index');

//pow  func
assert('power works with two integers', function() {return nm.pow(2, 2)} , 4);

//sqrt func
assert('sqrt works with perfect square', function() {return nm.sqrt(9)} , 3);

//cbrt func
assert('cbrt works with a perfect cube', function() {return nm.cbrt(27)}, 3);

//hypot func
assert('hypot works with a right angled triangle', function() {return nm.hypot(3, 4)}, 5);
