#!/bin/bash
file_path="src/files.log"
# check for valid file
if [ ! -f $file_path ]; then
    echo invalid file path
    exit
fi
 cat "$file_path" | grep -Ev "^$"
search_all=$(wc -l "$file_path")

search_uniq=$(echo "$search_all")
search_uniq2=$(echo "$search_uniq" | sort | uniq -c|wc -l)

search_hash=$(cat "$file_path")
search_hash2=$(echo "$search_hash"| awk '{print $8}'|awk '{print $1}')
search_hash3=$(echo "$search_hash2"| sed 's/ NULL //g')
search_hash4=$(echo "$search_hash3" | sort | uniq -c|wc -l)

echo $search_all | awk '{print $1}'
echo $search_uniq2 
echo $search_hash4