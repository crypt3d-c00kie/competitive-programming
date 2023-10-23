import pandas as pd 

def article_views(views: pd.DataFrame) -> pd.DataFrame:
    authorsWithOwn = views[views['viewer_id'] == views['author_id']][['viewer_id']].drop_duplicates()
    authorsWithOwn = authorsWithOwn.rename(columns={'viewer_id': 'id'})
    authorsWithOwn = authorsWithOwn.sort_values('id')
    
    return authorsWithOwn
