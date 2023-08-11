#define _CRT_SECURE_NO_WARNINGS
#pragma warning(disable:4996)
////设计你的循环队列实现。 循环队列是一种线性数据结构，其操作表现基于 FIFO（先进先出）原则并且队尾被连接在队首之后以形成一个循环。它也被称为“环形缓冲器”。
//typedef struct {
//    int* arr;
//    int front;
//    int rear;
//    int k;
//} MyCircularQueue;
//
//
//MyCircularQueue* myCircularQueueCreate(int k) {
//    MyCircularQueue* tmp = (MyCircularQueue*)malloc(sizeof(MyCircularQueue));
//    tmp->k = k;
//    tmp->arr = (int*)malloc(sizeof(int) * (k + 1));
//    tmp->front = tmp->rear = 0;
//    return tmp;
//}
//
//bool myCircularQueueIsEmpty(MyCircularQueue* obj) {
//    return obj->front == obj->rear;
//}
//
//bool myCircularQueueIsFull(MyCircularQueue* obj) {
//    return obj->front == (obj->rear + 1) % (obj->k + 1);
//}
//
//bool myCircularQueueEnQueue(MyCircularQueue* obj, int value) {
//    if (myCircularQueueIsFull(obj))
//        return false;
//    obj->arr[obj->rear] = value;
//    obj->rear++;
//    obj->rear %= (obj->k + 1);
//    return true;
//}
//
//bool myCircularQueueDeQueue(MyCircularQueue* obj) {
//    if (myCircularQueueIsEmpty(obj))
//        return false;
//    obj->front++;
//    obj->front %= (obj->k + 1);
//    return true;
//}
//
//int myCircularQueueFront(MyCircularQueue* obj) {
//    if (myCircularQueueIsEmpty(obj))
//        return -1;
//    return obj->arr[obj->front];
//}
//
//int myCircularQueueRear(MyCircularQueue* obj) {
//    if (myCircularQueueIsEmpty(obj))
//        return -1;
//    return obj->arr[obj->rear == 0 ? obj->k : obj->rear - 1];
//}
//
//void myCircularQueueFree(MyCircularQueue* obj) {
//    free(obj->arr);
//    free(obj);
//}
//
///**
// * Your MyCircularQueue struct will be instantiated and called as such:
// * MyCircularQueue* obj = myCircularQueueCreate(k);
// * bool param_1 = myCircularQueueEnQueue(obj, value);
//
// * bool param_2 = myCircularQueueDeQueue(obj);
//
// * int param_3 = myCircularQueueFront(obj);
//
// * int param_4 = myCircularQueueRear(obj);
//
// * bool param_5 = myCircularQueueIsEmpty(obj);
//
// * bool param_6 = myCircularQueueIsFull(obj);
//
// * myCircularQueueFree(obj);
//*/
