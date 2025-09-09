arr=[9,7,2,4,1]

def quick(arr,s,e):
    if(s<=e):
        i=s-1
        for j in range(s,e+1):
            if(arr[j]<arr[e]):
                i+=1
                arr[i],arr[j]=arr[j],arr[i]
        i+=1
        arr[i],arr[e]=arr[e],arr[i]
            
        quick(arr,s,i-1)
        quick(arr,i+1,e)
        
print(arr)
quick(arr,0,len(arr)-1)
print(arr)
    