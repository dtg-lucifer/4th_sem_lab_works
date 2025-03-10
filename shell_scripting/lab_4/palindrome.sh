#!/bin/bash

num=$1
reverse=0
original=$num
while [ $num -gt 0 ]; do
    digit=$((num % 10))
    reverse=$((reverse * 10 + digit))
    num=$((num / 10))
done
if [ $original -eq $reverse ]; then
    echo "$original is a palindrome."
else
    echo "$original is not a palindrome."
fi