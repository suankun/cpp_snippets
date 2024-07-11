// https://www.codewars.com/kata/5862e7c63f8628a126000e18/train/cpp
int box_capacity(int length, int width, int height) {
    // calculate one pizza storage in feet, turn inces to feet
    float pizza_storage = 16.0/12;
    
    // boxes in length
    int len_boxes = length/pizza_storage;
    // boxes in width
    int wid_boxes = width/pizza_storage;
    // boxes in height
    int hei_boxes = height/pizza_storage;
        
    return len_boxes*wid_boxes*hei_boxes;
}
//
int box_capacity(int length, int width, int height) {
    const int SIZE = 16;
    return (length * 12 / SIZE) * (width * 12 / SIZE) * (height * 12 / SIZE);
}
