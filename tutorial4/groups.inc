# LAMMPS Input File (License CC BY 4.0)
# By Simon Gravelle, Jacob R. Gissinger, and Axel Kohlmeyer  
# The DOI will be added upon publication
# Find more on GitHub: https://github.com/lammpstutorials

group H2O type O H
group Na type Na+
group Cl type Cl-
group ions union Na Cl
group fluid union H2O ions

group wall type WALL
region rtop block INF INF INF INF 0 INF
region rbot block INF INF INF INF INF 0
group top region rtop
group bot region rbot
group walltop intersect wall top
group wallbot intersect wall bot
