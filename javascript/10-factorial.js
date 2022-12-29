#!/usr/bin/node
function factorial(a) {
	if (isNaN(a)){
		return 1;
	} else if (a === 0) {
		return 1;
	} else {
		let x = a;
		let i = 1;
		while (((a- i)) > 0) {
			x *= a - i;
			i++;
		}
		return x;
	}
}
console.log(factorial(parseInt(process.argv[2])));
