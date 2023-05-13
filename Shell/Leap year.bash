# hello world program in Bash Shell
echo "Enter the Year :"
read y
 b=`expr $y % 4`
 if [$b -eq 0]
then 
echo "$y is Leap Year"
else
echo "$y is Non Leap Year"
fi