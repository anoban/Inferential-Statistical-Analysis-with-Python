# ___Confidence Intervals___
---------------------

- Confidence intervals are defined through their ___lower confidence bound (LCB)___ and ___upper confidence bound (UCB)___, which are both functions of data.

- The population parameter of interest, that we need to estimate from the sample ___$\theta$___ is a population constant.

- The coverage probability of a confidence interval is that the probability when ___$LCB \le \theta~and~UCB \ge \theta$___, written as ___$P(LCB \le \theta \le UCB)$___.

- The coverage probability is often set by the researcher, and is often set to 95%.

- The coverage probability is defined in terms if hypothetical repeated samplings from the population of interest. When we construct confidence intervals from each sample, a fraction of the constructed confidence intervals will cover the true population parameter. This fraction is known as ___coverage probability___.

- Wider confidence intervals will have an easier time covering the true population parameter compared to a narrower one. However, ___wider confidence intervals are less informative.___

- Thus, a primary consideration when constructing confidence intervals is to adapt to the data, making the confidence intervals wider when the uncertainty is high and narrower when the uncertainty is low.

- In real world applications, the nominal (expected) coverage probability of a confidence interval will match that of real world sample. But this may not always be the case. CI may fail to cover the true population parameter when used in contexts that deviate much from the situations it was initially designed for.

- The actual coverage probability of a CI may be less than that of the nominal CI (say 95%), yielding a ___anti-conservative CI___ or greater than that of the nominal CI, yielding a ___conservative CI.___

- In practice we determine the CI using a single sample, the deduced CI will either cover the true population parameter or not. There's no room for probabilities. The outcome is strictly binary, It will or will not.

- We can rarely afford to make multiple random independent samples from a population, thus verifying the correctness of our CI becomes a trouble. To ensure that our CI will really cover the true population parameter, we can leverage certain proven theoretical constraints to come up with a better CI or we can use computer aided simulations to evaluate how a certain criteria for devising CIs perform under different settings.

- ## ___The confidence intervals we have seen so far are all constructed using two quantities:___
    - An unbiased estimate of the population parameter.
    - Standard error of this estimate.

- If we are to estimate the population mean, using a simple random sample, our best estimate will be the sample mean _$\bar{x}$_ and the estimated standard error for this estimate will be _$\frac{S}{\sqrt{n}}$_, where S is the standard deviation of the sample and n is the sample size.

- Many confidence intervals are constructed on the basis of ___best estimate $\pm K \cdot$ a few standard errors___. When working with a sample mean $\bar{x}$, the confidence interval becomes $= \bar{x} \pm K \cdot \frac{\sigma}{\sqrt{n}}$. If we consider a 95% confidence, for means, $K$ will become $\approx 1.96$. The constant K is chosen to be 1.96 to give our desired level of confidence.

## ___Constructing Confidence Intervals___
-----------------------

- There are two ways to obtain the K values to be used in the construction of confidence intervals.
  
- One approach is based on the assumption that the data is independent and identically distributed, and follows a normal (Guassian) distribution. If the data follows a normal distribution, then the $Z$ score will follow a students $t$ distribution with $(n - 1)$ degrees of freedom.

- We need the $Z$ score $\frac{\bar{x} - \mu}{s}$ to fall between $-K$ and $K$ with the probability $\alpha$.

- If we set the K equal to $1 - \frac{(1 - \alpha)}{2}$ quantile of the student's t distribution, then the resulting confidence interval will have the intended coverage rate.

- The K value computed using a student's t distribution will range from 2 to 2.5 (for 95% confidence intervals). That is a confidence interval will be constructed by taking a margin of error, which will be 2 to 2.5 times of standard error.

----------------------

- The next approach (which is most widely applicable) for obtaining K values uses the central limit theorem (CLT).

- CLT claims that sample means of identical and independantly distributed elements will be approximately normally distributed. CLT also assumes that the Z-scores will be normally distributed.

- CLT gives such assurances even when the original population has a non-uniform or skewed distribution, provided that our sample is ___large enough___.

- If the population is close to being normal, then we can expect the Z scores to be normally distributed even if the sample size is very small $n \approx 10$.

- But if the population is far from being normal (stringly skewed or have strong tails), then CLT won't be valid unless we make a sufficiently larger samples $n \approx 50$.

- When we can justify the use of CLT, we can take K to be $1 - (1 - \alpha) / 2$ quantile of the normal distribution. In other words, if we consider 95% confidence intervals, significance $\alpha = 0.05$, so K is the 1 - {(1 - 0.05) / 2} quantile of a normal distribution. This leads to setting the K to 1.96 to get a 95% coverage probability.