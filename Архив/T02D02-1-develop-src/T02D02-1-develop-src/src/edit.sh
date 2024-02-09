#!/bin/bash

# Проверяем, переданы ли все аргументы
if [ $# -ne 3 ]; then
  echo "Использование: $0 <путь_к_файлу> <текст_для_замены> <текст_замены>"
  exit 1
fi

file_path=$1
search_text=$2
replace_text=$3
if [[ "$search_text" = "" || "$replace_text" = "" ]]; then 
echo "Не введена необходимая информация" 
exit 1 
fi 
if [ ! -f "$file_path" ]; then 
echo "Файл $file_path не существует" 
exit 1 
fi 
if [[ "$file_path" != *".txt" ]]; then 
echo "Неверное разрешение файла" 
exit 1  
fi

# Выполняем замену текста в файле
sed -i "" "s/$search_text/$replace_text/g" "$file_path"


# Указываем путь к файлу логов
LOG_FILE="src/files.log"


# Получаем размер файла в байтах
FILE_SIZE=$(stat -f "%z" "$file_path")

# Получаем дату и время
DATE_TIME=$(date +"%Y-%m-%d %H:%M:%S")

# Получаем sha-сумму файла и алгоритм вычисления sha
SHA_SUM=$(shasum -a 256  "$file_path")
ALGORITHM=$(echo "$SHA_SUM" | awk '{print $1}')

# Записываем лог в файл
echo "$file_path - $FILE_SIZE - $DATE_TIME - $ALGORITHM - sha256" >> "$LOG_FILE"
echo "Замена выполнена успешно."


