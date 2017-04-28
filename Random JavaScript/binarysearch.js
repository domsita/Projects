function getRandy (min, max) {
	min = Math.ceil(min);
  max = Math.floor(max);
  return Math.floor(Math.random() * (max - min)) + min;
}

function search (n) {
  var min = 1;
  var max = 1000;
  var guess = getRandy(min, max);
  var steps = 0;

  while (guess !== n){
    if (guess === n) {
      return (n+" found in "+steps+" steps!");
    } else if (guess > n) {
      min = guess;
      guess = getRandy(min, max);
      steps++;
    } else if (guess < n) {
      max = guess;
      guess = getRandy(min, max);
      steps++;
    }
  }
}

search(500);
