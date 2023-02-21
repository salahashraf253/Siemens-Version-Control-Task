# Siemens-Version-Control-Task
## git commends 
```
git init 
git add ./main.cpp
git commit -m "implement getSum feature"
git push --all
git remote add origin https://github.com/salahashraf253/Siemens-Version-Control-Task.git

//create new branch
git checkout -b "getAvg-feature"
git add ./main.cpp
git commit -m ""
git push -u origin  getAvg-feature

//create second branch
git checkout -b "getMin-feature"
git add ./main.cpp
git commit -m ""
git push -u origin  getMin-feature


//merge first branch into master
git checkout "master"
git merge "getAvg-feature"
git push -u origin "master"


//merge second branch into master 
git checkout "master"
git merge "getMin-feature"
git push -u origin "master"
```
