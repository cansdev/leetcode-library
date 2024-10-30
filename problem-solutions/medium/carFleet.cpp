class Solution {
public:
    int carFleet(int target, vector<int>& position, vector<int>& speed) {

        if (position.size() < 2)
            return position.size();

        vector<pair<int, float>> posAndTime;
        
        for (int i = 0; i < position.size(); i++) {
            float arrival = (float)(target - position[i]) / speed[i];
            posAndTime.push_back({position[i], arrival});
            cout << "Car at position " << position[i] << " takes " << arrival << " to reach target." << endl;
        }

        sort(posAndTime.begin(), posAndTime.end(), greater<pair<int, float>>());

        int fleetCount = 1; 
        float slowestTime = posAndTime[0].second;

        for (int i = 1; i < posAndTime.size(); i++) {
            if (posAndTime[i].second > slowestTime) {
                fleetCount++; 
                slowestTime = posAndTime[i].second;
            }
        }

        return fleetCount;
    }
};
