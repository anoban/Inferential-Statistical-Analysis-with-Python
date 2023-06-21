# ___What Affects a Standard Error of an Estimate?___
---------------------

- Variance in the variables of interest that are used to compute the estimate. The higher the variability in the variable, the more imprecise the estimate based on that sample will be.

- Sample size: Larger samples generally produce sampling distributions with less variability, i.e. smaller standard deviations and consequently smaller standard errors. We can still get unusual estimates that deviate a great deal from the true population parameter, even if the sample is fairly large but ripe with outliers.

- The degree of dependence in the collected observations, especially due to cluster sampling. When cluster sampling is practiced, clusters of individuals sharing common characteristics are grouped together. Consequently units that get grouped into same clusters will have higher degrees of similarity compared to units from different clusters. This lack of independence can be mitigated by applying statistical techniques that compute the standard errors for each clusters, accounting for the inaccuracies arising from cluster sampling.

- Stratification of the target sample: Have we used stratified sampling, we'll produce estimates that are more tuned to the specific stratum from which our sample was taken. Since we are ignoring inter-stratum variances, our sample is less reflective of the true population parameters.