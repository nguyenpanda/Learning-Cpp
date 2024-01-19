import numpy as np
import matplotlib.pyplot as plt
from scipy.optimize import linprog

# Objective function coefficients
c = [1, 1]

# Coefficient matrix for the inequality constraints
A = [
    [-1, 0],  # -x1 <= 0
    [0, -1],  # -x2 <= 0
    [-1, -1],  # -a*x1 - x2 <= -7
    [-1/3, -1]  # -b*x1 - x2 <= -4
]

# Bounds for variables x1 and x2
x1_bounds = (0, None)
x2_bounds = (0, None)

# Number of samples
num_samples = 1000

# Initialize arrays to store results
objective_values = np.zeros(num_samples)

for i in range(num_samples):
    # Uniformly sample a and b from the specified distributions
    a = np.random.uniform(1, 4)
    b = np.random.uniform(1/3, 1)

    # Update the coefficients of the constraints with the sampled values of a and b
    A[2][0] = -a
    A[3][0] = -b

    # Right-hand side of the inequality constraints
    b_constraints = [0, 0, -7, -4]

    # Solve the linear programming problem
    result = linprog(c, A_ub=A, b_ub=b_constraints, bounds=[x1_bounds, x2_bounds], method='highs')

    # Store the objective function value
    objective_values[i] = result.fun

print(f'Means: {np.mean(objective_values)}')

# Plot the results
plt.scatter(range(1, num_samples + 1), objective_values, marker='.')
plt.xlabel('Sample Index')
plt.ylabel('Objective Function Value (z_min)')
plt.title('Objective Function Values with Randomly Sampled a and b')
plt.show()
