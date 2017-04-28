function fizzbuzz (x) {
	if (x%3 === 0 && x%5 === 0) {
		console.log("FIZZBUZZ");
	} else if (x%3 === 0) {
		console.log("FIZZ");
	} else if (x%5 === 0) {
		console.log("BUZZ");
	} else {
		console.log(x);
	}
}

for (var i = 1; i < 101; i++) {
	fizzbuzz(i);
}
