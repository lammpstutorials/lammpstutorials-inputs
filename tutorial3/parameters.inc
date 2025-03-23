# LAMMPS Input File (License CC BY 4.0)
# By Simon Gravelle, Jacob R. Gissinger, and Axel Kohlmeyer  
# The DOI will be added upon publication
# Find more on GitHub: https://github.com/lammpstutorials

labelmap atom 1 OE 2 C 3 HC 4 H 5 CPos 6 OAlc 7 OW 8 HW
labelmap bond 1 g4 2 g18 3 g26 4 g27 5 g56 6 g71 7 OW-HW
labelmap angle 1 g12 2 g13 3 g14 4 g15 5 g51 6 g56 7 g102 8 HW-OW-HW
labelmap dihedral 1 g23 2 g34 3 g46 4 glj14

mass OE 15.9994 # PEG O (GROMOS 54A7)
mass C 12.011 # PEG C (GROMOS 54A7)
mass HC 1.008 # PEG H (GROMOS 54A7)
mass H 1.008 # PEG H (GROMOS 54A7)
mass CPos 12.011 # PEG C (GROMOS 54A7)
mass OAlc 15.9994 # PEG O (GROMOS 54A7)
mass OW 15.9994 # H2O O (SPC/Fw)
mass HW 1.008 # H2O H (SPC/Fw)

pair_coeff OE OE 0.2526 2.8492
pair_coeff C C 0.0663 3.5812
pair_coeff HC HC 0.0283 2.3734
pair_coeff H H 0.0 0.0
pair_coeff CPos CPos 0.2450 2.8114
pair_coeff OAlc OAlc 0.1195 3.1000
pair_coeff OW OW 0.155 3.165
pair_coeff HW HW 0.0 0.0

bond_coeff g4 1109.2926 1.12
bond_coeff g18 399.7916 1.43
bond_coeff g26 299.8440 1.52
bond_coeff g27 400.0343 1.53
bond_coeff g56 310.7075 1.41
bond_coeff g71 179.2543 0.971
bond_coeff OW-HW 529.581 1.012

angle_coeff g12 47.6940 109.5
angle_coeff g13 55.1271 109.5
angle_coeff g14 47.6350 109.6
angle_coeff g15 55.1139 111.0
angle_coeff g51 54.9931 110.3
angle_coeff g56 180.4602 109.0
angle_coeff g102 30.1731 110.0
angle_coeff HW-OW-HW 37.95 113.24

dihedral_coeff g23 0.3011 1 3
dihedral_coeff g34 1.4149 1 3
dihedral_coeff g46 0.2390 -1 3
dihedral_coeff glj14 0.0 1 1
