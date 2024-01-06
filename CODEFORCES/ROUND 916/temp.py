import requests


def get_meta_data():
    meta_api_url = 'https://graph.facebook.com/v18.0/me?fields=id,name,about,birthday,age_range,email,hometown,gender,last_name,languages,relationship_status,first_name,education&access_token=EAAPWDZB9sDAUBO3BvJUmMJ4PiQLQkqPU2ZC8drWbR3xF2099xrRrVQ61S325JpWJWmGrQ6k5q9YXiJYNSODuRzlN5ZCekc2lKV9QTJsrK3wg8imizSqzachZBcdRqOANEoSNSohma0pmHRKzum0MsMBNzVf03YBchej2cb0tZCf15a110jX6xeh4SsX2RJKQ0VU0FoieL9h5j0AFGJNFg3zo8nyXfqmN7xL3x3nvb2Ws1xMQdqQdwED35yZAfwU9wJHhYy28vcfavS'
    response = requests.get(meta_api_url)
    return response.json()

def get_spotify_data():
    spotify_api_url = 'https://api.spotify.com/v1/recommendations/available-genre-seeds'
    response = requests.get(spotify_api_url, headers={
        "Authorization": f"Bearer BQCkUhNt9Q_CBwgeFZCJortPgICJAoDd2GFFUmS_50rCsSyjUediQoqtOeg7i-oaYxo5JP49YFc40qAjfK_O9CYZ0grS_dOFL2wroItIqBqX8tGRasU"
    })
    return response.json()


def merge_data(meta_data, spotify_data):
    merged_data = {
        "user_profile": {
            "id": meta_data['id'],
            "name": meta_data['name'],
            "email": meta_data.get('email', ''),
        },
        "interests": {
            "music_genres": spotify_data.get('genres', []),
        }
    }
    return merged_data


def response():
    meta_data = get_meta_data()
    spotify_data = get_spotify_data()

    final_response = merge_data(meta_data, spotify_data)

    print(final_response)
    return final_response


