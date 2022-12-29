#!/usr/bin/node
if (Number.isNaN(parseInt(process.argv[2]))) {
	console.log(0);
} 
if (parseInt(process.argv.length) <= 3) {
	console.log(0);
} else {
 	let num = [];
	for (let i = 0; i < process.argv.length - 2; i++) {
		num[i]= parseInt(process.argv[i + 2]);
	}
	console.log(num);
	let largest = num[2];
	let secondLargest = num[2];
        for (let i = 3; i < num.length; i++) {
	        if (largest < num[i] ) {
	                largest = num[i];
		}
	}
	let num2 = num.sort();
	console.log(num2);
	secondLargest = num2[num2.length - 2];
	console.log('largest is: ' + largest);
	console.log('second Largest is: ' + secondLargest);
}
