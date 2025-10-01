# Python Script
# Licensed under CC BY 4.0
# A Set of Tutorials for the LAMMPS Simulation Package (LiveCoMS, 2025)
# By Simon Gravelle, Cecilia M. S. Alvares, Jacob R. Gissinger, and Axel Kohlmeyer
# Please cite doi.org/10.33011/livecoms.6.1.3037
# Find more on GitHub: https://github.com/lammpstutorials
import numpy as np
import re
import yaml

# Import the data from the yaml file
pattern = r"^(keywords:.*$|data:$|---$|\.\.\.$|  - \[.*\]$)"
docs = ""
with open("breakable.yaml") as f:
    for line in f:
        m = re.search(pattern, line)
        if m:
            docs += m.group(0) + "\n"
thermo = list(yaml.load_all(docs, Loader=yaml.CSafeLoader))

# Read basic information
print("Number of runs: ", len(thermo))
print("All info:", thermo[1]['keywords'])

# Read the data from the second run, and save it. 
Force = []
Length = []
for line in thermo[1]["data"]:
    _, _, _, L, F = line
    Force.append(F)
    Length.append(L)
Force = np.array(Force)
Length = np.array(Length)

# Calculate the stress and the strain from the Force and Length
Area = np.pi*5.2**2 # Angstrom^2
Stress = Force/Area # eV/Angstrom^3 
Strain = 100*(Length-Length[0])/Length[0] # in percents

np.savetxt("breakable.dat", np.vstack([Strain, Stress]).T)
