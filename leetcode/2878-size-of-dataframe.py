import pandas as pd

def getDataframeSize(players: pd.DataFrame) -> List[int]:
    
    # .shape will return dimensions
    # .shape[0] returns row count
    # .shape[1] returns col count
    
    return [players.shape[0], players.shape[1]]