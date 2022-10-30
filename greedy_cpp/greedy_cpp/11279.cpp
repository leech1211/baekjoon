#include <iostream>
using namespace std;


class MaxHeap
{
private:
	int heapsize;		//현재용량
	int capacity;		//최대용량
	int* heap;			//배열
public:
	MaxHeap()
	{
		heapsize = 0;
		capacity = 10;
		heap = new int[capacity + 1];

		for (int i = 0; i < capacity + 1; i++)
		{
			heap[i] = NULL;		//배열 초기화
		}
	}
	~MaxHeap()
	{
		delete[] heap;
	}

	bool IsEmpty()
	{
		return heap[1] == NULL;
	}

	void ChangeSize1D(int*& a, const int oldSize, const int newSize)
	{
		if (newSize < 0) throw "New length must be >= 0";

		int* temp = new int[newSize];		//new array
		int number = min(oldSize, newSize);		//number to copy
		copy(a, a + number, temp);
		delete[] a;		//deallocate old memory
		a = temp;		
	}

	void Push(const int e)
	{
		if (heapsize + 1 == capacity)
		{
			ChangeSize1D(heap, capacity, 2 * capacity);
			capacity *= 2;
		}
		int currentNode = ++heapsize;
		while (currentNode != 1 && heap[currentNode / 2] < e)
		{
			heap[currentNode] = heap[currentNode / 2];
			currentNode /= 2;
		}
		heap[currentNode] = e;
	}

	int Pop()
	{
		if (IsEmpty()) return 0;
		else
		{
			int sol = heap[1];
			heap[1] = NULL;

			//remove last element from heap
			int lastE = heap[heapsize--];

			//trickle down
			int currentNode = 1;	//root
			int child = 2;			//a child of currentNode
			while (child <= heapsize)
			{
				//set child to larger child of currentNode
				if (child < heapsize && heap[child] < heap[child + 1]) child++;

				//can we put lastE in currentNode?
				if (lastE >= heap[child]) break;

				heap[currentNode] = heap[child];	//move child up
				currentNode = child; child *= 2;	//move down a level
			}
			heap[currentNode] = lastE;
			return sol;
		}
		
	}
};

int main()
{
	ios::sync_with_stdio(0), cin.tie(0), cout.tie(0);

	MaxHeap* h = new MaxHeap;
	
	int num;
	int pushNum;
	cin >> num;
	int* answer = new int[num];
	int j = 0;

	for (int i = 0; i < num; i++)
	{
		cin >> pushNum;
		if (pushNum != 0)
		{
			h->Push(pushNum);
		}
		else
		{
			answer[j] = h->Pop();
			j++;
		}
	}

	for (int i = 0; i < j; i++)
	{
		cout << answer[i] << '\n';
	}

	delete[] answer;
	delete h;
}