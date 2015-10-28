# bday
Data Structures Assignment 9 (fall 2013) 

Prompt:

https://docs.google.com/document/d/1fDFg6a7Cs0aBpoa5UzYllczNJGjbReGwBROLlzPxE9k/edit#

HOMEWORK #9:
Bender’s day out.

Due Date:  Thursday, December the 12th, 11:59PM
For this assignment, you need to submit a file called ‘bday.cpp’ and any other necessary implementation files. Remember to put your name and section at the top of all your files.
Problem
Bender is taking the day off. Not because he actually has a day off, he just felt like taking a day off. Using an stolen acquired plane ticket, he can fly to many cities around the planet. After landing in the destination’s airport, Bender can go sightseeing using the city’s public transportation tube networks. However, Bender is short of transportation tube tokens, so he may not be able to pay the fare to reach every location between a city.

Given a map of a city’s tube network (given to you as a graph), and how many tube tokens Bender has, help Bender figure out which locations he can reach from the city’s airport.
 

The Tube Transportation System.


Input
The input will consist of a sequence test cases.  Each test case consists of Bender’s starting tokens and a Weighted Directed Acyclic Graph (The city’s tubes and their fares).  
The first line of the input tells you how test cases are in the input. 
Each test case starts with a single line <T>, Bender’s starting tokens.
For each graph, the first line is of the form:
	<name> <N>
where <name> is the name of the city and <N> is the number of locations in this city.
Afterwards, <N> lines follow, each of the form:
	<location> <K> <loc1> <w1> <loc2> <w2> …. <locK> <wK>
<location> indicates the name of a location, <K> indicates the number of neighbors of <location>  and <loc1><w1> <loc2><w2> …. <locK><wK> is a list of tubes (edges) out of <location> each with a destination <locX> and a fare price (weight) <wX>.
For example, to represent the graph:

New New York
The input file will read:
	NewNewYork 4
	airport 1 museum 3
	museum 2 zoo 4 park 5
	zoo 1 park 3
	park 0

Notice: 
Location names do not include spaces. 
Bender’s starting tokens and tube fares are all positive Integers.
Every city will include a location called “airport”. (Not necessarily the first location listed)
Output
For each city, output which locations Bender can reach from the “airport” given his starting tokens in the format show in the sample input / output.
