# Commands used in each step 
step 1 - mkdir Coordinate-Location 
step 2 - mkdir North
step 2.1- touch NDegree.txt
step 2.2- touch NMinutes.txt
step 2.3- touch NSeconds.txt
step 2.4- cat NDegree.txt NMinutes.txt NSeconds.txt > NorthCoordinate.txt
step 2.5- I right clicked on the NorthCoordinate.txt file and clicked the copy to option and copied it to the Coordinate-Location directory. then i renamed it North.txt then deleted the file created in step 2.4
step 3- go to the Coordinates-Location directory. 
step 4- mkdir East
step 4.1- touch EDegree.txt
step 4.2- touch EMinutes.txt
step 4.3- touch ESeconds.txt
step 4.4- cat EDegree.txt EMinutes.txt ESeconds.txt > EastCoordinate.txt
step 4.5- I right clicked on the East Coordinate.txt file and clicked the copy to option and copied it to the Coordinate-Location directory then i renamed it East.txt then deleted the file created in step 4.4
step 5- cat North.txt East.txt > Location-Coordinate.txt
step 8 - touch SOLUTION.md
