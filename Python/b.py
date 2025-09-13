from concurrent.futures import ThreadPoolExecutor
import time

def download(url):
    print(f"Downloading {url}...")
    time.sleep(2)
    return f"Finished {url}"

with ThreadPoolExecutor(max_workers=3) as executor:
    results = executor.map(download, ["file1", "file2", "file3"])

for r in results:
    print(r)
