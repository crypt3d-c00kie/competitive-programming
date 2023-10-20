import pandas as pd

def calculate_special_bonus(employees: pd.DataFrame) -> pd.DataFrame:
    # condition
    # bonus == salary if empID is odd and does not start with M
    # otherwise 0
    
    employees['bonus'] = employees.apply(lambda row: row['salary'] if row['employee_id'] % 2 == 1 and not row['name'].startswith('M') else 0, axis=1)
    result = employees[['employee_id', 'bonus']]
    result = result.sort_values(by='employee_id')
    
    return result