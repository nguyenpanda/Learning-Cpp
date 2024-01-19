import statistics as stt
import math

X = [n for n in range(10)]
print(f'X: {X}')

print(f'Median of X: {stt.median(X)}')

# Mean
print(f'Mean of X (statistics): {stt.mean(X)}')
print(f'Mean of X (manual): {sum(X) / len(X)}')

# Standard variation
print(f'Standard variation of X (statistics) {stt.stdev(X)}')
print(f'Standard variation of X (manual) {math.sqrt(sum((n - stt.mean(X))**2 for n in X) / (len(X) - 1))}')

# Variation
print(f'Variation of X (statistics) {stt.variance(X)}')
print(f'Variation of X (manual) {sum((n - stt.mean(X))**2 for n in X) / (len(X) - 1)}')

# Sigma
# print(f'Variation of X (statistics) {stt.pstdev(X)}')
# print(f'Variation of X (statistics) {stt.pvariance(X)}')

# Normal distribution
mu = 0
sigma = 1
x = stt.NormalDist(mu, sigma)
print(f'Cumulative distribution function X~N({mu}, {sigma}): {x.cdf(0)}')
print(f'Probability density function X~N({mu}, {sigma}): {x.pdf(0)}')

# Calculate Z = (X - mu) / sigma
print(f'Z-score: {x.zscore(0)}')

# Invert of Normal distribution P(x <= X) = p, given p, return x
print(f'{x.inv_cdf(0.95)}')

# Overlapping area (the area between the ND1 and ND2)
print(f'{x.overlap(x)}')

# 







