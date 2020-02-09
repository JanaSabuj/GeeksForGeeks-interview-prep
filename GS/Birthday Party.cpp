2.birthday party question: In a circle children are sitting (ordered. By ascending id) 
there is a random number D(1 to N) starting with D, distribute 
the toy to each sequential kid, until all toys distributed.
but the last toy is damaged, the task is to find the number at which kid is sitting 
who get the damage toy

// https://www.geeksforgeeks.org/goldman-sachs-interview-experience-telephonic/

int val = (D + x - 1) % N  ; // x- no of chocolates
if(val == 0)
	val = N;
cout << val <<endl;