# ___Importance of Good Research Questions___
-----------------
-----------------

- Data are everywhere, big datasets, small datasets, web contents, design studies... It's fairly easy to find datasets for analyses these days.
- However, if we do nt have well formulated research questions in mind, our inferences can become misleading or outright opposite of the reality.

### ___What defines a good research question?___
---------------

- What is the __target population__, that we are interested in?
- Is the __research question descriptive or analytic?__
    - e.g. Descriptive research question: Mean income of males in a population.
    - e.g. Analytic research question: Relationship between income and quality of life in a population?
- Has the question been __asked before?__, if so, does this new study produces __inferences that did not exist before__.
- Are the __variables readily available, measured appropriately, or feasible to measure using existing tools?__

-----------------

___Given we had a good research question, and followed appropriate statistical procedures to stduy the data, we can generate quality inferences, related to that question.___

___In the absence of a good research question, running analyses arbitrarily on the data will likely lead to poor quality inferences and misleading conclusions.___

----------------

## ___Example: A bad research question___
----------------

#### ___Q. What is the relationship between academic performance and summer internship success?___

Now, why this question is ill-formed?

1. We have no idea about the target population. Whose performance and internship success are we interested in? This information is completely missing in the research question.

2. Is the question descriptive or analytic? Analytic, since it strives to figure out the relationship between two variables, instead of measuring a statistic.

3. Will exploring this question generate new knowledge that compunds the existing body of knowledge on the given topic? No idea.

4. How are the performance and internship success measured, on what scale, considering which metrics? No idea.

___This question satisfies just one out of the four requirements for a good research question.___

-----------------------

## ___Example: A good research question___
----------------

#### ___Q. Considering Hispanic adults of age 30 to 45, living in the United States between 2020 - 2023, what is the difference in the mean systolic blood pressure between males and females?___

1. This question defines the target population, very clearly. The racial, temporal and spacial boundaries that define the target population are very clear and explicitly stated.

2. The question is an analytic one, that intends to find the difference between two population means.

3. Has this question been asked before? Perhaps yes, in previous years. But this time, it'll generate new information.

4. Measurement strategy is stated. Systolic blood pressure of males and females. (eventhough, this could use some elaboration.) Like at what time the blood pressure is measured? Are we including outliers (HBP patients, patients with ailments that increase blood pressure, people who take medications to control BP.. etc.)

-------------------

___Explicitly and elaborately defining the research question makes it clear for readers to understand, and makes the process of picking right analytic measures and tools easier.___

- What data do we need? ___NHANES 2020 - 2023 dataset, filtered to include just Hispanic adults (18+)___.
- What analysis are to be performed? ___Compare the means of male and female systolic blood pressure (a continuous variable).___
- Inferential approach? ___Independent samples' t test.___
  