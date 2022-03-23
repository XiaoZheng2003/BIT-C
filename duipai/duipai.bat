@echo off
:again  
data > input.txt  
std < input.txt > std_output.txt  
test < input.txt > test_output.txt  
fc std_output.txt test_output.txt  
if not errorlevel 1 goto again  
pause 