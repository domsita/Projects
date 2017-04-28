// -- A program that takes two lists of numbers and sorts them into one list in order

function getRandy (min, max) {
	min = Math.ceil(min);
  max = Math.floor(max);
  return Math.floor(Math.random() * (max - min)) + min;
}

var a = new Array();
var b = new Array();
var alen = getRandy(10, 30);
var blen = getRandy(10, 30);

for (var afill = 0; afill < alen; afill++) {
	a.push(getRandy(1, 100));
}
for (var bfill = 0; bfill < blen; bfill++) {
	b.push(getRandy(1, 100));
}
// -------everything above here populates the array

// - - - - - sorting
a.sort(function (a, b) {
	return a-b;
});
b.sort(function (a, b) {
	return a-b;
});
// - - - - - - - end sorting

console.log("a: "+a+"\n"+"b: "+b);

var c = new Array();

var act = 0;
var bct = 0;

while (true) {
	if (a[act]<=b[bct]) {
  	c.push(a[act]);
    act++;
  } else {
  	c.push(b[bct]);
    bct++;
  }
  if (act === a.length && bct === b.length) {
  	break;
  }
}

console.log("_____________________________");
console.log("a and b together: "+c.join(" "));
console.log(a.length+b.length+" should equal "+c.length);
if (a.length+b.length === c.length) {
console.log("...and it does!");
} else {
console.log("...but you fucked up!");
}

console.log("_________________________________\n\n\n");
