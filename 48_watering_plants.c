int wateringPlants(int* plants, int plantsSize, int capacity) {
    int step = 0;
    int n = plantsSize;
    int i = 0;
    int s = capacity;
    while(i<n){
        if(s < plants[i]){
            step += 2*i + 1;
            s = capacity;
            s -= plants[i];
            i++;
        }
        else{
            step++;
            s = s - plants[i];
            i++;
        }
    }
    return step;
}