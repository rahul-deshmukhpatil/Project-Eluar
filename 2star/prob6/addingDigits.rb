#!/bin/bash/env ruby
#author: rhaul patil<rahul.deshmukhpatil@gmail.com>
def fact(n) 
	return 1 if n<=1 
	return n * fact(n-1)
end

def mult10(n)
#	sum=0
#	while(n)
#		sum = sum * 10
#		sum = sum + 1
#		n = n - 1
#	end
#	return sum 
	return 1 if n<=1 
	return (10 * mult10(n-1)) + 1
end

print "Enter n: "
n=gets();
n=n.to_i
#find how many times each digit apears
no_of_times_each_digit_appears=fact(n-1)
puts "factorial = #{no_of_times_each_digit_appears}"

#find the addition of the digits
addition_of_the_digits=(n*(n+1))/2;
puts "addition of the digits = #{addition_of_the_digits}"

#find the addition of ten's multipliers at the each place
multipliers=mult10(n);
puts "multipliers = #{multipliers}"
#final_answer
final_answer=no_of_times_each_digit_appears * addition_of_the_digits * multipliers;
puts "final answer = #{final_answer}"

exit 0
