import pandas as pd

def selectData(students: pd.DataFrame) -> pd.DataFrame:
    # students = pd.DataFrame(students)
    mask = students['student_id'] == 101
    resultDF = students[mask][['name', 'age']]
    return resultDF