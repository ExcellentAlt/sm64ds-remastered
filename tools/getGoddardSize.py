import sys, os

with open(sys.argv[1]) as f:
	for line in f:
		if "GODDARD_SIZE" in line:
			tokens=line.split()
				