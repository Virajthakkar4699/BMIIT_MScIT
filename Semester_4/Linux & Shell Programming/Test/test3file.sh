if [ "$#" -ne 2 ]
then
	echo "Please Provide Two File As Argument"
	exit 0
fi

file1="$1"
file2="$2"

if ! [ -r "$1" ]
then
	echo "Argument 1: File Not Found"
	exit 0
fi

if ! [ -r "$2" ]
then
	echo "Argument 2: File Not Found"
	exit 0
fi

linefile1=$(grep -c '' "$file1")
linefile2=$(grep -c '' "$file2")

if [ "$linefile1" -eq "$linefile2" ]
then
	echo "Both File Have Equal Number Of  Lines"
else
	if [ "$linefile1" -gt "$linefile2" ]
	then
		echo "File2($2) Having Less Number Of Lines Than File1($1)"
	else
		echo "File1($1) Having Less Number Of Lines Than File2($2)"
	fi
fi

