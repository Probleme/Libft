#!/bin/sh
while true
do
    echo "----------------------------------------------------------------------"
    git pull
    git add .
    git commit -m "updating"
    git push
    date
    echo "----------------------------------------------------------------------"
    sleep 120
done