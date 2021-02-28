#!/bin/bash

echo -e "\033[0;33m Starting push to github...\033[0m"

git pull origin master
git add -A
git commit -m "update"
git push origin master

echo -e "\033[0;32m Done...\033[0m"

