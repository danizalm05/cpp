cls
 
@echo off
del .git 
git init
pause
git init

pause
git remote add origin https://github.com/danizalm05/cpp.git
git remote -v
pause 
cls
git pull   origin master

pause