/*
  A program that calculates and returns a given amount of Fibonacci numbers.
  completed 4/6/17
*/

function fibme () {
  var n = $(  "#quantityFib"  ).val();
  if ($(  "#listOfFibs"  ).length) {$(  "#listOfFibs"  ).remove()}
  if (n > 120) {
    if ($(  "#invalid"  ).length) {
      $(  "#invalid"  ).replaceWith('<p id="invalid">Way too many Fibonacci numbers. How about you pick a number under 120?</p>');
      return;
    } else {
      $(  "#submitFib"  ).after('<p id="invalid">Way too many Fibonacci numbers. How about you pick a number under 120?</p>');
      return;
    }
  } else if (n < 1 || isNaN(n)) {
    if ($(  "#invalid"  ).length) {
      $(  "#invalid"  ).replaceWith('<p id="invalid">Please enter a number above 0.</p>');
      return;
    } else {
      $(  "#submitFib"  ).after('<p id="invalid">Please enter a number above 0.</p>');
      return;
    }
  }
  var fibs = getFibs(n);
  if ($(  "#invalid"  ).length) {$(  "#invalid"  ).remove();}
  if ($(  "#listOfFibs"  ).length) {
    $(  "#listOfFibs"  ).replaceWith('<p id="listOfFibs">The first '+n+' Fibonacci numbers are: <br>'+fibs+'</p>');
  } else {
    $(  "#submitFib"  ).after('<p id="listOfFibs">The first '+n+' Fibonacci numbers are: <br>'+fibs+'</p>');
  }
}

// populates an aray with fib numbers
function getFibs(n) {
  var fibs = [0,1];
  for (i = 2; i <=n; i++) {
    fibs[i] = fibs[i-1] +fibs[i-2];
  }
  return fibs.join("  ***  ");
}
