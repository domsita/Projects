function getRandy (min, max) {
	min = Math.ceil(min);
  max = Math.floor(max);
  return Math.floor(Math.random() * (max - min)) + min;
}
var intlist = new Array();

for (var i = 0; i<10; i++) {
  intlist.push(getRandy(1, 9));
}

console.log(intlist.toString());

var last = intlist.length - 1;
for (var j = 0; j< Math.ceil(intlist.length/2); j++) {
  var temp = intlist[j];
  intlist[j] = intlist[last-j];
  intlist[last-j] = temp;
}

console.log(intlist.toString());
