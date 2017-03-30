import hashlib

class Codec:
    def __init__(self):
        self.url_list=[]
        self.hash_map={}
        self.current_id=0
        self.alphabet='0123456789abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ'
    
    def encode(self, longUrl):
        shortUrl = 'http://tinyurl.com/'
        m = hashlib.md5(longUrl)
        m = m.hexdigest()
        if self.hash_map.has_key(m):
            url_id = self.hash_map[m]
        else:
            self.url_list.append(longUrl)
            url_id = self.current_id
            self.hash_map[m] = url_id
            self.current_id += 1
        for i in range(5):
            p = url_id%62
            url_id = url_id/62
            shortUrl = shortUrl + str(self.alphabet[p])
        return shortUrl
    
    def decode(self, shortUrl):
        idUrl = shortUrl[19:]
        url_id = 0
        weight = 1
        for i in idUrl:
            p = self.alphabet.find(i)
            url_id += p * weight
            weight *= 62
        return self.url_list[url_id]
