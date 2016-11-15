"use strict"

function toBit(numeric) {
	let s = numeric % 1
	let r = ''

	let i = 0
	while (i < 64) {
		s = s * 2
		if (s == 1) {
			r += '1'
			console.info('stops at bit count:', i)
			break
		} else {
			if (s > 1) {
				r += '1'
				s = s % 1
			} else {
				r += '0'
			}
			i++
		}
	}
	return r
}

console.log(toBit(0.2))