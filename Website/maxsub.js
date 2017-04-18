/*
  A program that creates an array of numbers and checks for the highest possible sum from any sequence.
  Completed 4/7/17.
*/

function subme() {
  var numList = new Array()
  var howManyNums = Math.floor(Math.random()*(50-20)) + 20;;
  for (i = 0; i < howManyNums; i++) {
    var num = Math.floor(Math.random()*40);
    if (num > 20) {num = num-40;}
    numList.push(num);
  }
  var mseq = maxSequence(numList);
  if ($(  "#subnums"  ).length) {
    $(  "#subnums"  ).replaceWith('<p id="subnums">Of the following '+howManyNums+' numbers: '+numList.join(", ")+'</p>');
    $(  "#subnumsResult"  ).replaceWith('<p id="subnumsResult">'+mseq+'</p>');
  } else {
    $(  "#submitSub"  ).after('<p id="subnums">Of the following '+howManyNums+' numbers: '+numList.join(", ")+'</p>');
    $(  "#subnums"  ).after('<p id="subnumsResult">'+mseq+'</p>');
  }
}

var maxSequence = function(arr){
  var arrin = Array.from(arr);
  function allneg(value){if (value>0) return value};
  if (arrin.length === 0) {return 0};
  var allneg = arrin.filter(allneg);
  if (allneg.length === 0) {return 0};

  var n = arrin.length;
  var highest;
  var highestsub = new Array();

  highest = sum(arrin);
  for (slicesize = 1; slicesize < n; slicesize++) {
    for (startslice = 0; startslice < n-1; startslice++) {
      if (startslice - slicesize < n) {
        var subarr = arrin.slice(startslice, slicesize);
        if (sum(subarr)>highest) {
          highestsub = [];
          highestsub.push(subarr);
          highest = sum(subarr);
        }
      }
    }
  }
  var arrev = arr.reverse();

  for (slicesize = 1; slicesize < n; slicesize++) {
    for (startslice = 0; startslice < n-1; startslice++) {
      if (startslice - slicesize < n) {
        var subarr = arrev.slice(startslice, slicesize);
        if (sum(subarr)>highest) {
          highestsub = [];
          highest = sum(subarr);
          highestsub.push(subarr);
        }
      }
    }
  }
  var out = highestsub[0].reverse().join(", ");

  return ("The highest sum is "+highest+" from the following sequence: ["+out+"].");
}

function sum(subarr) {
  var sum = subarr.reduce(function (a, b) {return a + b;}, 0);
  return sum;
}
