import pandas as pd

def invalid_tweets(tweets: pd.DataFrame) -> pd.DataFrame:
    
    # filter if strlen > 15
    tweetsInvalid = tweets[tweets['content'].str.len() > 15]
    return tweetsInvalid[['tweet_id']]