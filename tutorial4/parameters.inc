# LAMMPS Include File
# Licensed under CC BY 4.0
# A Set of Tutorials for the LAMMPS Simulation Package (LiveCoMS, 2025)
# By Simon Gravelle, Cecilia M. S. Alvares, Jacob R. Gissinger, and Axel Kohlmeyer
# Please cite doi.org/10.33011/livecoms.6.1.3037
# Find more on GitHub: https://github.com/lammpstutorials

mass O 15.9994
mass H 1.008
mass Na+ 22.990
mass Cl- 35.453
mass WALL 26.9815

pair_coeff O O 0.185199 3.1589
pair_coeff H H 0.0 1.0
pair_coeff Na+ Na+ 0.04690 2.4299
pair_coeff Cl- Cl- 0.1500 4.04470
pair_coeff WALL WALL 11.697 2.574
pair_coeff O WALL 0.4 2.86645

bond_coeff O-H 0 0.9572
angle_coeff H-O-H 0 104.52
