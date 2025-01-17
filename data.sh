#!/bin/bash

# Use this script to scrape data from the web using the provided shell scripts provided.
# Column selector for Red Sox data (prints out index and column name):

# awk -F ',' sets dilimiter to , (CSV), loop through each column andn print column number and field value

# Win column from Red Sox historical data: 
 wget -O - https://gist.githubusercontent.com/LoganSchmidt/d46e622559758be756b4621a064f1b75/raw/1987e17e7038574c8bd3948f0a60a86be209cbae/bluejays.csv | awk -F ' ' '{ if (NR > 1)  { print $1, $7 } }' > blue_jays_wins.txt


