#!/usr/bin/node
const count = parseInt(process.argv[2]);
if (Number.isNaN(count)) {
	console.log('Missing number of occurrences');
} else {
	for (let i = 0; i < count; i++) {
		console.log('C is fun');
	}
}
