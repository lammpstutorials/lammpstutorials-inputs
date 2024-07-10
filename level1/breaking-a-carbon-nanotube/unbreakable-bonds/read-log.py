{
 "cells": [
  {
   "cell_type": "code",
   "execution_count": 13,
   "metadata": {},
   "outputs": [],
   "source": [
    "import numpy as np\n",
    "import re, yaml\n",
    "\n",
    "docs = \"\"\n",
    "with open(\"log.lammps\") as f:\n",
    "    for line in f:\n",
    "        m = re.search(r\"^(keywords:.*$|data:$|---$|\\.\\.\\.$|  - \\[.*\\]$)\", line)\n",
    "        if m:\n",
    "            docs += m.group(0) + '\\n'\n",
    "thermo = list(yaml.load_all(docs, Loader=yaml.CSafeLoader))\n",
    "\n",
    "Etot_vs_step = []\n",
    "for line in thermo[1]['data']:\n",
    "    Etot_vs_step.append([line[0], line[4]])\n",
    "np.savetxt(\"etot_vs_step.dat\", Etot_vs_step)"
   ]
  }
 ],
 "metadata": {
  "kernelspec": {
   "display_name": "Python 3",
   "language": "python",
   "name": "python3"
  },
  "language_info": {
   "codemirror_mode": {
    "name": "ipython",
    "version": 3
   },
   "file_extension": ".py",
   "mimetype": "text/x-python",
   "name": "python",
   "nbconvert_exporter": "python",
   "pygments_lexer": "ipython3",
   "version": "3.12.3"
  }
 },
 "nbformat": 4,
 "nbformat_minor": 2
}
