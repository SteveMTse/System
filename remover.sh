for item in $(find . -name "*.gch")
do
    if [ -f $item ];
    then
        rm $item
        echo $item has been removed
    fi
done