import pandas as pd

def createDataframe(student_data: List[List[int]]) -> pd.DataFrame:
    
    # converting dict into dataframe
    resultDF = pd.DataFrame(student_data, columns = ['student_id', 'age'])
    return resultDF