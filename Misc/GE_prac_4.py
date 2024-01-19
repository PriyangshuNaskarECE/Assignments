import pandas as pd

dataf = {
    'id': [7058, 4511, 7014, 7033, 7058],
    'name': ['sravan', 'manoj', 'aditya', 'bhanu', 'manoj'],
    'maths_marks': [99, 97, 88, 90, 73],
    'chemistry_marks': [89, 99, 99, 90, 54],
    'telgu_marks': [99, 97, 88, 80, 87],
    'hindi_marks': [99, 97, 56, 67, 51],
    'social_marks': [79, 97, 78, 0, 70]
}

df = pd.DataFrame(dataf)

print("Original DataFrame:")
print(df)

grouped_by_name = df.groupby('name').mean()
print("\nGrouped by Name:")
print(grouped_by_name)

grouped_by_social_sum = df.groupby('social_marks').agg({
    'maths_marks': 'sum',
    'chemistry_marks': 'sum',
    'telgu_marks': 'sum',
    'hindi_marks': 'sum',
    'id': 'count'  
})
print("\nGrouped by SocialMarks Sum:")
print(grouped_by_social_sum)

grouped_by_maths_count = df.groupby('maths_marks').agg({
    'name': 'count',
    'chemistry_marks': 'mean',  
    'social_marks': 'sum'
})
print("\nGrouped by MathsMarks Count:")
print(grouped_by_maths_count)
