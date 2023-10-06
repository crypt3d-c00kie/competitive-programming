import pandas as pd

def find_customers(customers: pd.DataFrame, orders: pd.DataFrame) -> pd.DataFrame:
    finaldf = customers[~customers['id'].isin(orders['customerId'])]
    
    # renaming column name to required
    finaldf = finaldf[['name']].rename(columns = {'name' : 'Customers'})
    return finaldf