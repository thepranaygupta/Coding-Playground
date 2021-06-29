package linklist;
import java.util.*;


public class Main {

	public static void main(String[] args) {
		Scanner sc=new Scanner(System.in);
		Linkedlist list=new Linkedlist();
		
		boolean flag=true;
		int valu;int posi=0;
		while(flag) {
			System.out.println();
			System.out.println("1. Add item to the list at start");
			System.out.println("2. Add item to the list at last");
			System.out.println("3. Add item to the list at position");
			System.out.println("4. Delete First node");
			System.out.println("5. Delete last node");
			System.out.println("6. Delete node at position");
			System.out.println("7. Update node at position");
			System.out.println("8. View List");
			System.out.println("9. Exit");
			System.out.println("Enter Choice");
			int choice=sc.nextInt();
			switch(choice) {
			
			case 1: System.out.println("Enter value");
				valu=sc.nextInt();
				list.insertAtFirst(valu);
			break;
			
			
			case 2: System.out.println("Enter value");
				valu=sc.nextInt();
				list.insertAtLast(valu);
			break;
			
			
			case 3: System.out.println("Enter value");
			valu=sc.nextInt();
			System.out.println("Enter position");
			posi=sc.nextInt();
			list.insertAtPos(valu,posi);
			break;
			
			case 4: 
			list.deleteFirst();
			break;
			
			case 5: 
				list.deleteLast();
				break;
				
			case 6: 
			System.out.println("Enter position");
			posi=sc.nextInt();
			list.deleteAtPos(posi);
			break;
			
			case 7:System.out.println("Enter value");
			valu=sc.nextInt();
			System.out.println("Enter position");
			posi=sc.nextInt();
			list.updateData(valu,posi);
			break;
			
			case 8: list.viewList();
			break;
			
			case 9: flag=false;
			break;
			
			default: System.out.println("invalid choice");
			
			
			
			}
		}
		
	}

}
class Node{
	private int data; private Node next;
	public Node() {
		data=0;next=null;
	}
	public void setData(int d) {
		data=d;
	}
	public void setNext(Node n) {
		next=n;
	}
	public int getData() {return data;}
	public Node getNext() {return next;}
}

class Linkedlist{
	private Node start;
	private int size;
	
	public Linkedlist() {
		start=null;size=0;
	}
	public boolean isEmpty() {
		if(start==null) 
			return true;
		else
			return false;
	}
	public int getListSize() {
		return size;
	}
	public void viewList() {
		if(isEmpty()) {
			System.out.println("Empty List");
			return;
		}
		Node t=start;
		for(int i=1;i<=size;i++)
		{
			System.out.print(t.getData()+ "|___|"+"-->");
			t=t.getNext();
		}
	}
	public void insertAtFirst(int val) {
		Node n=new Node();
		n.setData(val);
		if(!isEmpty()) {
			n.setNext(start);
		}
		start=n;
		size++;
	}
	public void insertAtLast(int val) {
		Node t=start;
		Node n=new Node();
		n.setData(val);
		if(t==null) start=n;//if list is null
		else {
			while(t.getNext()!=null) {
				t=t.getNext();
			}
			t.setNext(n);
		}
		size++;
	}
	public void insertAtPos(int val,int pos) {
		if(start==null) {
			System.out.println("Empty list, Try Again");
			return;
		}
		Node t=start;
		Node n=new Node();
		n.setData(val);
		for(int i=1;i<pos-1;i++) {
			t=t.getNext();
		}
		n.setNext(t.getNext());
		t.setNext(n);
		size++;
	}
	public void updateData(int val,int pos) {
		if(isEmpty()||pos>size||pos<1) {
			System.out.println("Updation not possible");
			return;
		}
		Node t=start;
		for(int i=1;i<pos;i++) {
			t=t.getNext();
		}
		t.setData(val);
		
	}
	public void deleteFirst() {
		if(start==null) {
			System.out.println("list is empty");
			return;
		}
		else {
			Node t=start;
			start=start.getNext();
			t.setNext(null);
			size--;
		}
	}
	
	public void deleteLast() {
		if(start==null) {
			System.out.println("list is empty");
			return;
		}
		else {
			Node t=start;
			while(t.getNext()!=null)
			{
				t=t.getNext();
			}
			t.setNext(null);
			size--;
		}
	}
	
	public void deleteAtPos(int pos) {
		if(isEmpty()||pos>size||pos<1) {
			System.out.println("Deletetion not possible");
			return;
		}
		else {
			Node t=start;
			Node t1;
			for(int i=1;i<pos-1;i++) {
				t=t.getNext();
			}
			t1=t.getNext();
			t.setNext(t1.getNext());
			t1.setNext(null);
			size--;
		}
	}
}
