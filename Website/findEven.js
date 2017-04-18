/*
  A program that creates an array of numbers and checks to see if sums on the left and right of any numbers match.
  Completed 4/6/17
*/

function evenme() {
  var numList = new Array()
  var howManyNums = Math.floor(Math.random()*(20-10)) + 10;
  for (i = 0; i < howManyNums; i++) {
    var num = Math.floor(Math.random()*20);
    if (num > 10) {num = num-20;}
    numList.push(num);
  }
  var findEvenResult = findEvenIndex(numList);
  if ($(  "#evenResult"  ).length){
    $(  "#evenResult"  ).replaceWith('<p id="evenResult">I searched the following '+howManyNums+' numbers: '+numList.join(", ")+'.<br><br>'+findEvenResult+'</p>');
  } else {
    $(  "#submitEven"  ).after('<p id="evenResult">I searched the following '+howManyNums+' numbers: '+numList.join(", ")+'.<br><br> '+findEvenResult+'</p>');
  }
}

// for each spot, slices subarrays from the left and right and compares values.
function findEvenIndex(arr) {
  n = arr.length;
  for (i = 1; i < n; i++) {
    var left = arr.slice(0, i);
    var right = arr.slice(i+1, n);
    var leftout; var rightout;
    var leftsum = 0;
    var rightsum = 0;
    for (l = 0; l < left.length; l++) {leftsum+=left[l]; leftout=left;}
    for (r = 0; r < right.length; r++) {rightsum+=right[r]; rightout=right;}

    if (leftsum == rightsum) {return "The number "+ arr[i] + " at position " + (i+1) + " matches! ["+leftout.join("+")+"]  =  " + leftsum + " and ["+rightout.join("+")+"]  =  "+rightsum+"."}
  }
  return "This set was a dud, but keep trying and you'll get one!";
}
