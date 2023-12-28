cd ../ 
find src/ test/ lib/ \( -name *.h -o -name *.c -o -name *.cpp -o -name *.hpp \) | uncrustify -c scripts/uncrustify.cfg -F - --no-backup
echo "-------------------------Code beautifier finished-------------------------------"
echo -n "Press [ENTER] to exit... "
read var_name
echo "You can go on!...."