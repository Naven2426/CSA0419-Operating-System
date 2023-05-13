echo "Enter the Number :"
read n
 r=`expr $n % 2`
 echo "The result"
 if [$r -eq 0]
then 
echo "$n is Even Number"
else
echo "$n is Odd Number"
fi
