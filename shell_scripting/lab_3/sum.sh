echo "Enter the number 1: "
read num1

echo "Enter the number 2: "
read num2

# sum=$((num1 + num2))
sum=`expr $num1 + $num2`

echo "The sum of $num1 and $num2 is $sum"
