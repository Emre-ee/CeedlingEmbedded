PROJECT_NAME='Embedded Project'
PROJECT_RESULT_NAME='static_analysis_result'

PROJECT_DIR=$(pwd)

cd ..

WORKSPACE_PATH=$(pwd)

cppcheck "$WORKSPACE_PATH/lib/hal_gpio/"*  "$WORKSPACE_PATH/src/"* --enable=all --xml 2>"$WORKSPACE_PATH/scripts/html-report-stats/$PROJECT_RESULT_NAME.xml"
cppcheck-htmlreport --title "$PROJECT_NAME" --file "$WORKSPACE_PATH/scripts/html-report-stats/$PROJECT_RESULT_NAME.xml" --source-dir "$WORKSPACE_PATH" --add-author-information=default --report-dir "$WORKSPACE_PATH/scripts/html-report-stats/$PROJECT_RESULT_NAME"
echo "-------------------------Static analysis finished-------------------------------"
echo -n "Press [ENTER] to exit... "
read var_name
echo "You can go on!...."
