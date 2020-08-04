#!/bin/bash
echo "please enter a number"
read num
while [ $num -gt 0 ]
do
rem=$(( $num % 10))
num=$(( $num / 10))
check=$(( $rem % 2))
if [ $check -eq 0 ]
then 
echo "even digit are $rem"
else
echo "odd digit are  $rem"
fi
done
