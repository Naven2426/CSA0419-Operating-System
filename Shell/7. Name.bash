function greeting ()
{
    str = "Hello , $name"
    echo $str
}
echo "Enter Your Name :"
read name
val = $(greeting)
echo "Return value at the Function is $val"