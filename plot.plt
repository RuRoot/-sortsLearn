set terminal jpeg
set out "temp.jpeg"

plot 	'dur_sort.dat' using 1:2 with lines, \
	'dur_sort.dat' using 1:3 with lines, \
	'dur_sort.dat' using 1:4 with lines, \
	'dur_sort.dat' using 1:5 with lines, \
	'dur_sort.dat' using 1:6 with lines
