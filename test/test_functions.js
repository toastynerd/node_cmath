var assert = require('assert');

var testFunctions = module.exports = exports = {};

testFunctions.testAssert = function(description, expression, result) {
  try {
    assert(expression(), result);
  } catch(e) {
    console.log('test ' + description + ' failed');
    throw e;
  }
};
