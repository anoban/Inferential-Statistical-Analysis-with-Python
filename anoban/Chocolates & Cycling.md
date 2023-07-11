-------------------------------------
## _Question._
-------------------------------------
You have been hired by the U.S. bicycle team to help them train for the Tour de France. The head trainer recently read an article, which presents the results of a study about the effects of the consumption of chocolate (dark chocolate and white chocolate) on a number of important outcome variables during cycling. These outcome variables included: oxygen consumption (ml/kg/min), heart rate (bpm), blood lactate (BLa), blood pressure (mmHg), and an all-out bicycle sprint performance (meters).

The experimental setup consisted of a randomized crossover design where the various outcome variables of n = 9 male participants was measured in two trials after participants consumed either dark chocolate (40 grams of Dove) or white chocolate (40 grams of Milkybar), each for two weeks. A crossover design is a repeated measurements design such that each subject receives the two different treatments (dark chocolate versus white chocolate) during the different two-week time periods, i.e., the patients cross over from one treatment to another during the course of the experiment. The order of which treatment was received in the first time period was randomized. Prior to receiving the first treatment, each participant underwent baseline measurements on the outcome variables.

The trainer was specifically interested in the results for the all-out sprint performance which measured the distance traveled (in meters) for a two-minute time trial. He would like to know how the regular consumption of chocolate affects the total distance covered during an all-out sprint and if the type of chocolate consumed matters.

Some of these results are presented in the table below. 

Distance Covered (in meters = m) during Time Trial* Note: n = 9 for each condition


|                     | Baseline | White Chocolate (WC) | Dark Chocolate (DC) |
|---------------------|----------|----------------------|---------------------|
Mean (m)              |      1367  |   1419             |    1606             |
Std dev (m)           |      171   |   248              |    158              |
p-value (compared to baseline) |   |     0.319          |    0.001            |  
 

Dark Chocolate: 95% Confidence Interval for the population average change in total distance covered (dark chocolate over baseline) is 165 m to 314 m; (p-value 0.001).

Dark versus White Chocolate: 95% Confidence Interval for the population average change in total distance covered (dark chocolate over white chocolate) is 82 m to 292 m; (p-value = 0.003).

The trainer knows you have some statistics background and wants your help on understanding and interpreting these results. Based on the results from the article, write a memorandum to the trainer addressing his questions and explaining what these statistics results show.

Your memorandum should include a little discussion about the benefits of using a crossover design. Although this sample size is small, you can consider it a reasonable one for this type of study, and can thus focus on interpreting the results. Be sure to comment about the two provided confidence intervals, including an interpretation of both confidence intervals, and an explanation of the meaning of the confidence level in context. Finally, include in your memorandum your recommendation for or against inclusion of chocolate (and if inclusion, which type of chocolate) in the athletes’ diet.

-----------------------------------

## ___Advantages of crossover design___
--------------------

__A crossover design is a repeated measurements design such that each subject receives the two different treatments (dark chocolate versus white chocolate) during the different two-week time periods, i.e., the patients cross over from one treatment to another during the course of the experiment. The order of which treatment was received in the first time period was randomized. Prior to receiving the first treatment, each participant underwent baseline measurements on the outcome variables.__

- An individual's body's response to any food uptake is highly variable, depedning on the individual's physiology, age, gender, weight, lifestyle etc. Allocating a fixed set of participants to each treatments will give leeway to such differences influence the results asymmetrically. This can lead to less accurate inferences and erroneous conclusions. If such is the case, our experimental design allows too much freedom, to conclusively attribute the inferences made from the data in travelled distance, to the chocolate intake.

- Crossover design mitigates this problem, because technically, every participant in the larger participants sample will take part in each one of the treatment. Which makes the constributions of each participant's unique characteristics in contriving the results equally likely in both treatment setups. i.e When a person with a certain set of psyological traits and lifestyle part takes in two of the studies, the influence of their individuality is more/less equally felt by both the experimental setups, skewing the results in both setups symmetrically.

-------------------------

## ___Confidence Intervals:___
-------------------

- A 95% confidence interval means that if we are to take 100 samples of the same size (n = 9), repeatedly from the parent population, the confidence intervals computed using 95 of them will cover the true population metric.

- Considering the confidence interval for Dark chocolate over the baseline, both LCB and UCB are positive values. This suggests that Dark chocolate indeed improved the performance of cyclists, significantly, as the Null hypothesis gets rejected by the confidence interval failing to cover 0.0. In addition to this, the LCB is a fairly large distance (165m), which implies that the improvement caused by the consumption of Dark chocolates over the negative control is quite large. The UCB is at 314m, which hints a substantial increase. This is reinforced by the p value produced by hypothesis testing. p value for the Dark chocolates over baseline is 0.001 which is smaller than the significance level of 5% (0.05 significance). Which too insinuates the rejection of Null hypothesis.

- When comparing the effects of the two chocolates on the cyclists, both the LCB and UCB turn to be positive values, consequently the confidence interval does not include 0.0. So, there is indeed a significant performance improvement caused by consuming Dark chocolates instead of White chocloates. This is further supported by a less than 0.05 p value, from hypothesis testing. However, the situation here isn't as polarized as the comparison of Dark chocolates to the baseline. The LCB in this test is 82m (roughly half the LCB of the previous comparison). And the range of this confidence interval (292 - 82 = 210) is quite wide compared to the previous one (314 - 165 = 149). Regardless, Dark chocolates do cause more performance improvement compared to White chocolates.

- Based on these analyses, I recommend supplementing the cyclists' diet with chocolates. Among them, Dark chocolates are likely to cause more performance improvements over White chocolates. Dark chocolates must be given preference whenever possible, if that's not an option, white alternatives could be consumed.
-------------------------------
The data used in this study comes from: R. K.; Brouner, J.; Spendiff, O. Journal of the International Society of Sports Nutrition. 2015 12:47.

--------------------------