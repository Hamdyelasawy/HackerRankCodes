// Complete the solve function below.
void solve(double meal_cost, int tip_percent, int tax_percent) {

    double TotalCost = meal_cost + ((tip_percent/100.0)*meal_cost) + ((tax_percent/100.0)*meal_cost);

    TotalCost += 0.5;

    printf("%d",(int)TotalCost);
}
