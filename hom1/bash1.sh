#! /usr/bin/bash
result=0;
if [ $# -eq 0 ];
then
    if [ -e test.cpp  ]
    then	    
    	g++ test.cpp
    	./a.out
    else
	    echo "test.cpp file not found"
	    result=1
fi	    
elif [ $# -eq 1 ]
then
	if [ -e test.cpp ]
	then

		g++ test.cpp
		./a.out $1
		result=$?
	else
		echo "test.cpp file not found"
		result=1
	fi
fi
if [ $# -eq 1 ]
then	
	if [ $result -eq 0 ]
	then
		if [ -e gold.txt ]
		then
			DIFF=$( diff gold.txt returns.txt )
			if [ "$DIFF" == "" ]
			then
   	 			echo "there is no difference between the two files"
			else
				echo $DIFF
			fi
		else
			echo "File gold.txt not found"

		fi
	fi

fi
