# Econometrics Research

This repository presents applied econometrics, statistical simulation, and
foundational programming work organized as a research internship portfolio.
The notebooks emphasize reproducible empirical workflows: loading data,
specifying models, estimating parameters, evaluating assumptions, and
interpreting results in applied economic settings.

## Research Areas

- Applied microeconometrics: wage determinants, smoking policy, fertility, and
  labor supply
- Panel data methods: pooled OLS, clustered standard errors, country fixed
  effects, and time fixed effects
- Instrumental variables: causal identification using first-stage relevance and
  two-stage least squares
- Time-series econometrics: autoregressive models, unit-root testing,
  structural-break analysis, forecasting, and GARCH volatility models
- Statistical simulation: sampling distributions and Monte Carlo evidence for
  spurious regression

## Repository Structure

```text
notebooks/
  econometrics/
    democracy_income_panel_regression.ipynb
    earnings_education_wage_regression.ipynb
    fertility_labor_supply_iv.ipynb
    gdp_growth_volatility_garch.ipynb
    inflation_time_series_forecasting.ipynb
    smoking_ban_binary_response_models.ipynb
  simulation/
    poisson_sample_mean_stddev.ipynb
    poisson_sampling_distribution.ipynb
    spurious_regression_monte_carlo.ipynb
src/
  c-programming/
    greedy_cash_change.c
    mario_double_pyramid.c
    mario_single_pyramid.c
requirements.txt
```

## Project Index

| Project | Focus | Methods |
| --- | --- | --- |
| [Earnings, Education, and Wage Regression](notebooks/econometrics/earnings_education_wage_regression.ipynb) | Relationship between hourly earnings, age, gender, and bachelor's degree status | OLS, log-linear models, polynomial terms, interactions |
| [Democracy and Income Panel Regression](notebooks/econometrics/democracy_income_panel_regression.ipynb) | Association between democracy indicators and GDP per capita | Pooled OLS, clustered standard errors, entity fixed effects, time fixed effects |
| [Smoking Bans and Binary Response Models](notebooks/econometrics/smoking_ban_binary_response_models.ipynb) | Smoking behavior and workplace smoking bans | Linear probability model, probit, logit, robust inference |
| [Fertility and Labor Supply IV Analysis](notebooks/econometrics/fertility_labor_supply_iv.ipynb) | Effect of additional children on maternal labor supply | Instrumental variables, first-stage relevance, 2SLS |
| [Inflation Time-Series Forecasting](notebooks/econometrics/inflation_time_series_forecasting.ipynb) | Inflation persistence, stochastic trends, and forecasting | AR models, AIC/BIC, ADF tests, structural breaks, rolling forecasts |
| [GDP Growth Volatility with GARCH Models](notebooks/econometrics/gdp_growth_volatility_garch.ipynb) | Conditional volatility in quarterly GDP growth | AR models, GARCH estimation, variance forecasting |
| [Spurious Regression Monte Carlo Simulation](notebooks/simulation/spurious_regression_monte_carlo.ipynb) | False inference from unrelated random walks | Monte Carlo simulation, OLS diagnostics |
| [Poisson Sampling Distribution Simulation](notebooks/simulation/poisson_sampling_distribution.ipynb) | Sampling behavior of a Poisson population | Random sampling, fitted PMF, sampling distribution of the mean |
| [Poisson Sample Mean and Standard Deviation](notebooks/simulation/poisson_sample_mean_stddev.ipynb) | Introductory population-versus-sample comparison | Mean, standard deviation, Poisson simulation |

## Reproducibility

Install the Python dependencies with:

```bash
pip install -r requirements.txt
```

The econometrics notebooks use course or instructor-provided datasets that are
not included in this repository. When running in Google Colab, upload the
referenced Excel files into the notebook session or update each `read_excel`
path to point to your local data directory.

Several notebooks include package-install cells for Colab compatibility. For a
local environment, installing `requirements.txt` once is preferred.

## Programming Foundations

The C programs in `src/c-programming/` are short foundational exercises. They
are retained separately from the research notebooks to show basic algorithmic
practice without mixing them into the econometrics workflow.

## Notes

This repository is organized for review by research supervisors, internship
coordinators, and technical collaborators. File names describe the research
question or method rather than the original textbook chapter or exercise number.
