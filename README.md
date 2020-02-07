# WordSearch
WordSearch will read in a dictionary of words and find every word discovered from an n x m grid of characters.

How it works:
WordSearch is given two input files, first is the text file of dictionary words and second is the text file of the grid.
(See data folder)

It will save every dictionary word into a hashtable, and the hashtable uses separate chaining in order to handle collisions.
Once it has taken all the dictionary words, a timer is set to start and it will begin its search (for optimization purposes).
It will scan the grid in every direction and coordinate. Whenever it uncovers a word found inside the dictionary, 
it will save the coordinate, direction, and word into a string. Once it has finished, it will display the string will every
dictionary word found, the longest length word, the number of words found, and the time it takes to find these words.
