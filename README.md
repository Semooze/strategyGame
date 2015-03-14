# strategyGame

###This program simulate strategy game

you have some soldiers (mySoldiers).each soldier has 1 hit point <br>
your enemy has no soldier but they have forts(numB) <br>
each fort has helth point(hpB) and can kill soldiers equal (attackB) person. <br>
in each turn soldiers will attack forts then forts will attack soldiers back. <br>

function return least turn that soldiers use to break up all forts. <br>
if your enemy win return -1 <br>


##Rule##
* mySoldiers value is in range 1-100000
* hpB, attackB, numB values are in range 1-10000

##Compile##
> gcc -lm -o strategy strategyGame.c

##Run##
> ./strategy
